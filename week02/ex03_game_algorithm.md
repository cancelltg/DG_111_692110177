```mermaid

```

โจทย์ A — ระบบ Combat


```mermaid
flowchart TD
Start([Start]) --> Input[/รับplayer_attack, enemy_defense,
enemy_h/]
Input --> Calc["damage = max(player_attack - enemy_defense,
1)"]
Calc --> Reduce["enemy_hp = enemy_hp - damage"]
Reduce --> D1{enemy_hp <= 0?}
D1 -->|Yes| Win[/แสดง Victory!/]
D1 -->|No| Show[/แสดง enemy_hp ที่เหลือ/]
Win & Show --> End([End])
```

โจทย์ B — ระบบ Level Up


```mermaid
flowchart TD
Start([Start]) --> Input[/รับ รับ current_xp, xp_needded,level/]
Input --> Calc{current_xp >= xp_neednd?}
Calc --> |Yes| A[level = level+1]
Calc --> |NO| ED[แสดง level และ current_xp]
A --> B[xp_needed= xp_needed x 1.5]
B --> C[current_xp = 0]
C --> ED
ED --> End([End])
```

โจทย์ C (ท้าทาย) — Simple AI Patrol


```mermaid
flowchart TD
Start([Start]) --> Input[pos = A, dir = forward]
Input --> A{ระยะถึง piayer < 100?}
A --> |Yes| C[/chase player/]
A --> |NO| B[เลิ่อน enemy ตาม dir]
C -->End([End])
B --> D{ถึงจุด B?}
D -->|Yes| K[dir =กลับไปA ]
K -->|NO|A
D -->|NO| L{ถึงจุดA?}
L-->|NO| A
L-->|Yes| J[dir =ไปหน้าB]
J-->A
```


BEGIN [โจทย์ A — ตรวจสอบเกรด]
INPUT score
IF score >= 90 THEN เกรด = [A]
ELSE IF score >= 70 THEN เกรด = [B]

ELSE IF score >= 50 THEN เกรด = [C]

ELSE IF score >= 40 THEN เกรด = [D]

ELSE  เกรด= [F]
END IF
OUTPUT เกรด
END

BEGIN [โจทย์ B — หาค่าสูงสุดจาก 2 ตัวเลข]
INPUT รับaและb

INPUT a>b?
IF  yes THEN   แสดงa
IF  no THEN   แสดงb
OUTPUT 
END

BEGIN [โจทย์ C — นับจาก 1 ถึง N]
INPUT i=1

INPUT i <=N?
IF yes THEN พิมพ์i
IF no THEN END
ELSE พิมพ์i THEN i=i+1

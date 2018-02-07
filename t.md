<span style=color:#3399FF;font-size:150%> ## เขียนโปรแกรมทัวร์ และ คำณวนค่าบริการ ของบริษัททัวร์  ##</span>

ให้เขียนโปรแกรมทัวร์และคำณวนค่าบริการของบริษัททัวร์โดย 
1. แสดงรายชื่อ Package และ ราคา
2. ให้ผู้ใช้เลือก Package โดยเลือกเป็นหมายเลข Package
    * หาก Package ไม่มีในรายชื่อให้แสดง Invalid Package และจบการทำงาน
3. ถามจำนวนคนที่ต้องการซื้อ Package
4. ถามผู้ใช้ว่าต้องการเช่ารถหรือไม่โดยแสดงราคาเช่า 2000 ต่อวัน 
    * ตอบเป็น 1 = Yes หรือ 0 = No
    * ถ้าต้องการ ให้ระบุว่าต้องเช่ากี่วัน
    * ถ้าไม่เช่าให้ข้ามไปเช่าห้อง
5. ถามผู้ใช่ว่าต้องการเช่าห้องหรือไม่โดยแสดงราคาเช่าห้อง
    * ราคาห้องของแต่ละ Package ไม่เท่ากัน
    * ตอบเป็น 1 = Yes หรือ 0 = No
    * ถ้าผู้ใช้ต้องการเช่า ให้รับ จำนวนห้องที่ต้องการเช่าและจำนวนวัน
    * ถ้าไม่ต้องการเช่าให้ข้ามไปขั้นตอนคิดเงิน
6. แสดงจำนวนเงินที่ผู้ใช้ต้องชำระดังนี้
    * แสดง จำนวน Package และหมายเลข Package ที่เลือก พร้อมราคารวมของ Package
    * ถ้ามีการเช่ารถแสดงจำนวนวันที่ผู้ใช้ต้องการเช่ารถ พร้อมราคารวม
    * ถ้ามีการเช่าห้องแสดงจำนวนห้องและจำนวนวันที่ต้องการเช่าพร้อมมราคาเช่าห้องรวม
    * แสดงราคารวมทั้งหมดที่ต้องชำระ

-----------------------------------------------<span style=color:#3399FF	>**Package**</span>-----------------------------------------------
1. แพคเกจทัวร์ประเทศโปรตุเกส ราคา 50,000 บาท / คน 
2. แพคเกจทัวร์ประเทศบัลแกเรีย ราคา 45,000 บาท / คน 
3. แพคเกจทัวร์ประเทศโปแลนด์ ราคา 46,000 บาท / คน  
4. แพคเกจทัวร์ประเทศโมนาโก ราคา 51,000 บาท / คน  
5. แพคเกจทัวร์ประเทศสเปน ราคา 55,000 บาท / คน

-------------------------------------<span style=color:#3399FF>**ราคาห้องของแต่ละ Package**</span>-------------------------------------
1. สำหรับแพคเกจทัวร์ประเทศโปรตุเกส ราคา 2,000 บาท / ต่อวัน / ห้อง
2. สำหรับแพคเกจทัวร์ประเทศบัลแกเรีย ราคา 1,500 บาท / ต่อวัน / ห้อง
3. สำหรับแพคเกจทัวร์ประเทศโปแลนด์ ราคา 1,200 บาท / ต่อวัน / ห้อง
4. สำหรับแพคเกจทัวร์ประเทศโมนาโก ราคา 1,600 บาท / ต่อวัน / ห้อง
5. สำหรับแพคเกจทัวร์ประเทศสเปน ราคา 2,100 บาท / ต่อวัน / ห้อง

<span style=color:#3399FF;font-size:200%>**ตัวอย่าง Output ของโปรแกรม**</span>



<span style=color:#3399FF;font-size:180%>ตัวอย่างที่ 1</span>  


--------------Tour packet--------------  
1.Portugal  packet 50,000 baht.  
2.Bulgarian packet 45,000 baht.  
3.Poland    packet 46,000 baht.  
4.Monaco    packet 51,000 baht.  
5.Spain     packet 55,000 baht.    
Choose your packet number: <span style=color:#3399FF>5</span>  
How many people are go: <span style=color:#3399FF>2</span>  
Want to rent a car?  
2000/1day  
1 = yes , 0 = no: <span style=color:#3399FF>1</span>  
how many day you want to rent?: <span style=color:#3399FF>2</span>  
Do you want more room?  
Room price 2100/1day  
1 = yes , 0 = no: <span style=color:#3399FF>0</span>  
--------------Total packet--------------   
2 packet (packet number is 5)  
Total packet price: 110000  
Rent car for 2 day  
Total rent car price: 4000  
Total price: 114000 baht.  



<span style=color:#3399FF;font-size:180%>ตัวอย่างที่ 2</span>  



--------------Tour packet--------------  
1.Portugal  packet 50,000 baht.  
2.Bulgarian packet 45,000 baht.  
3.Poland    packet 46,000 baht.  
4.Monaco    packet 51,000 baht.  
5.Spain     packet 55,000 baht.  
Choose your packet number: <span style=color:#3399FF>5  </span>  
How many people are go: <span style=color:#3399FF>2  </span>  
Want to rent a car?  
2000/1day  
1 = yes , 0 = no: <span style=color:#3399FF>1  </span>  
how many day you want to rent?: <span style=color:#3399FF>2  </span>  
Do you want more room?  
Room price 2100/1day  
1 = yes , 0 = no: <span style=color:#3399FF>1  </span>  
How many room: <span style=color:#3399FF>2  </span>  
How many day: <span style=color:#3399FF>2  </span>  
--------------Total packet--------------  
2 packet (packet number is 5)  
Total packet price: 110000  
Rent car for 2 day  
Total rent car price: 4000  
More rent 2 room for 2 day  
Total rent room price: 8400  
Total price: 122400 baht.  


<span style=color:#3399FF;font-size:180%>ตัวอย่างที่ 3</span>  


--------------Tour packet--------------  
1.Portugal  packet 50,000 baht.  
2.Bulgarian packet 45,000 baht.  
3.Poland    packet 46,000 baht.  
4.Monaco    packet 51,000 baht.  
5.Spain     packet 55,000 baht.  
Choose your packet number: <span style=color:#3399FF>10</span>  
Invalid packet

![end](https://media.giphy.com/media/DjYqNVITTewEM/giphy.gif)
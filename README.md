# TUBES-PRD-TK4501-Kelompok8
Alat Pendeteksi Kebakaran menggunakan Tinkercad

<h2>Anggota</h2> 
<ul>
  <li>ALI UMAR</li>
  <li>ANAS SATRIA</li>
  <li>ARIEF ILHAM NOVANDI</li>
  <li>DAVID CHARLES DUVAL</li>
  <li>FIQRI AQILAH REZWANDI</li>
  <li>RIZKITA ILHAM RAHADYAN</li>
</ul> 

<h5>Link Presentasi : https://youtu.be/xzhJUJR2rD4 </h5>
<h5>Folder Script : Folder Board Tinkercad dan Script Arduino</h5>
<h5>Tinkercad Alat ada di akun Ali Umar</h5>



<h2>Latar Belakang</h2>
Penyediaan alat pemadam api di dalam bangunan tempat orang bekerja adalah hal yang wajib dilakukan[1]. Hal ini dilakukan untuk mencegah dan meminimalisir adanya kebakaran yang dapat menimbulkan kerugian materil dan non-materil. Setiap bangunan memiliki risiko terjadinya kebakaran. Di tahun 2020, tercatat terjadi 1.505 kejadian kebakaran berbagai objek bangunan dan kendaraan [2]. Atas dasar tersebut, diperlukan adanya sistem pemadam kebakaran yang dapat diandalkan dan dapat dengan mudah dikontrol oleh pengawas atau petugas.

<h2>Alternatif dan Pemilihan Solusi</h2>
Alternatif yang tersedia di publik luas saat ini adalah sistem pemadam api yang menggunakan sensor asap untuk mendeteksi adanya kebakaran. Sistem tersebut tentunya memiliki kelemahan. Karena hanya menggunakan asap sebagai masukkan data, dapat menimbulkan alarm palsu yang bisa menimbulkan keributan di dalam bangunan. Pada rancangan sistem kami, terdapat sensor temperatur yang bekerja bersama dengan sensor gas/asap. Terdapat juga LCD 16x2 yang memberikan informasi mengenai apa yang dibaca oleh kedua sensor tersebut, sehingga pengawas dapat memutuskan tindakan yang tepat. Sistem ini tetap bisa berfungsi seperti sistem pemadam otomatis pada umumnya, yaitu mengalirkan air secara otomatis jika terdeteksi adanya kebakaran.

<h2>Spesifikasi Sistem</h2>
Dalam pengembangan sistem ini, digunakan spesifikasi sistem sebagai berikut:<br/>
<ul>
  <li>Windows 11 Pro</li>
  <li>Intel Core i7-8550U / i5-8520U any CPU Work tbh</li>
  <li>RAM 16GB</li>
  <li>Microsoft Edge Chrome based</li>
  <li>Selama bisa menggunakan Tinkercad dan jalan, Aman</li>
</ul> 

<h2>Komponen</h2>
Komponen yang diperlukan adalah : <br/> 
<ul>
  <li>Arduino Uno R3</li>
  <li>Sensor gas atau asap</li>
  <li>Sensor suhu</li>
  <li>Push button</li>
  <li>LCD 16x2 </li>
  <li>LED multi-warna </li>
  <li>Buzzer </li>
  <li>Servo motor</li>
</ul> 

![Skematik](https://user-images.githubusercontent.com/93642379/149358061-a56142ba-1c65-40aa-947e-557f83aff6fd.jpg)

<h2> Flowchart </h2>
![Flowchart](https://user-images.githubusercontent.com/93642379/149535938-370edd64-9c70-47d9-ab80-068be0c8020c.jpg)



<h2>Implementasi</h2>
Cara sistem ini bekerja dengan menggunakan Arduino Uno sebagai mikrokontrollernya. Arduino akan membaca nilai masing-masing sensor dan menampilkannya pada LCD 16x2. Arduino ini juga akan mengatur warna lampu LED, dan servo motor sesuai dengan pembacaan nilai sensor. Terdapat juga tombol push button yang digunakan sebagai tombol darurat jika sensor gagal mendeteksi adanya bahaya. Dalam penerapan sistem ini, dapat dengan meletakkan LCD 16x2 dan Arduino Uno di ruangan pengawas atau petugas untuk mempermudah memonitor dan perawatan. Selanjutnya sensor-sensor diletakkan pada ruangan yang diperlukan adanya sensor kebakaran.

<h2>Referensi</h2>
[1]	United States of Labor, “1926.150 - Fire protection. | Occupational Safety and Health Administration,” 1996. [Online]. Available: https://www.osha.gov/laws-regs/regulations/standardnumber/1926/1926.150. [Accessed: 07-Jan-2022]. <br/>
[2]	I. dan S. Dinas Komunikasi, “Data Frekuensi Kebakaran Objek Terbakar Korban dan Taksiran Kerugian Di Provinsi DKI Jakarta Tahun 2020 - Open Data Jakarta,” https://data.jakarta.go.id/, 2020. [Online]. Available: https://data.jakarta.go.id/dataset/data-frekuensi-kebakaran-objek-terbakar-korban-dan-taksiran-kerugiandi-provinsi-dki-jakarta. [Accessed: 07-Jan-2022].

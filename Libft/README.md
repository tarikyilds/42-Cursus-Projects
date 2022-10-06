# 42 İstanbul Libft Projesi!

Merhaba! ben **Tarık Yıldırım**. Ve karşınızda ana eğitimdeki ilk projem. Libft projesini kısaca özetleyeyim. Projenin zorunlu kısmında havuz sürecinde işlediğimiz projelerimizin genel bir tekrarını yapıyoruz. Bonus kısmında ise yeni bir şey öğreniyoruz ve "Linked List" yapısını işliyoruz.

**Not:** Yazının devamında projeyi elimden geldiğince açıkladım. Lütfen bu açıklamaları yazdığım tarihte benimde bir öğrenci olduğumu unutmayın :) 

# Proje Dosyaları

Projemiz toplamda **44** adet dosyadan oluşmaktadır.

|                |Açıklama                          |Dosya Uzantısı                         |
|----------------|-------------------------------|-----------------------------|
|C Dosyaları|`Fonksiyonları içeren dosyalar`            |".c" uzantılı dosyalar            |
|Makefile          |`Projeyi derleyen komut dosyası `            |Uzantı bulunamadı!            |
|Kütüphane          |`Projenin kütüphane dosyası`|".h" uzantılı dosyalar|

## Hesaplarımı Takip Edebilirsiniz

Instagram: [tarikyilds](https://www.instagram.com/tarikyilds/) | Gmail adresim: [tarikyilds@gmail.com](tarikyilds@gmail.com)

## Kısa Açıklamalar...

 - ***ft_isdigit***
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin rakam olup olmadığı kontrol edilir.
	 - Ascii tablosunda rakamlar decimal değere göre 48 - 57 arasındadır.
	 - Dönüş değeri bulunan rakamın ascii decimal karşılığıdır.
	 - **c** değişkeni rakam değilse **0** döner.

 - ***ft_isalpha***
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin harf olup olmadığı kontrol edilir.
	 - Ascii tablosunda harfler decimal değere göre 65-90 (büyük harfler) ve 97-122 (küçük harfler) arasındadır.
	 -  Dönüş değeri bulunan harfin ascii decimal karşılığıdır.
	 - **c** değişkeni harf değilse **0** döner.

 - ***ft_isalnum***
	 - Fonksiyon parametresinde int tipinde c değişkeni alır.
	 - **c** değişkeninin harf veya rakam olup olmadığı kontrol edilir.
	 - Ascii tablosunda decimal aralıkları sırayla; 48-57, 65-90 ve 97-122'dir.
	 - Dönüş değeri bulunan karakterin decimal karşılığıdır.
	 - **c** değişkeni harf veya rakam değilse **0** döner

- ***ft_isascii***
	- Ascii tablosunda decimal değere göre 0-127 arası karakterler main ascii karakterleri olarak kabul edilir. 
	- 128-255 arası karakterler ise **extended ascii** karakterleri olarak geçer.
	- Fonksiyon parametresinde int tipinde c değişkeni alır.
	- **c** değişkeninin ascii decimal karşılığının 0-127 aralığında olup olmadığı kontrol edilir.
	- Dönüş değeri, kontrol işlemi doğru ise **1** değil ise **0** olarak belirlenir.
	
- ***ft_isprint***
	- Ascii tablosunda decimal değere göre 32-126 arası karakterler **printable** karakterlerdir.
	- Yine decimal değere göre 0-31 arası karakterler ve 127 karakteri ise **non-printable** karakterler olarak geçer.
	- Printable karakterler ekrana yazdırabilirken non-printable karakterler ekrana yazdırılamazlar. 
	- Fonksiyon parametresinde int tipinde c değişkeni alır.
	- **c** değişkeninin ascii decimal karşılığının 32-126 aralığında olup olmadığı kontrol edilir.
	- Dönüş değeri, karakter printable ise **decimal karşılığı** değilse **0** olarak belirlenir.

- ***ft_strlen***
	- Fonksiyon parametresinde **const char  \*s** değişkenini alır.
	- char *s içerisinde char karakterleri tutan bir dizi olarakta tanımlanabilir.
	- Ancak aslında, ramde bulunan belirli bir karakteri işaret eden ve index mantığıyla ilerlediğimizde sonraki karakterlere ulaşmamızı sağlayan  işaretçidir.
	- char *'ın önüne const sınıfını getirdiğimizde char * içerisindeki değerler yalnız okunabilir (read only) olur.
	- **Önemli:** While döngüsünün şartında bulunan **('\0')** döngünün sonuna gelindiği bildirir.
		- Ancak bu opsiyonel bir seçenektir. 
		- Yani bir başka yerde **const char \*s** dizisi doldurulurken son elemanına **\0** yerine başka bir karakter atandıysa bu sefer o karakteri kontrol etmemiz gerekir.
	- Dönüş değeri const char *s in **işaretlediği alandaki** karakterlerin toplamıdır.

- ***ft_memset***
	- Fonksiyon parametresinde void tipinde *b, int c ve size_t len değişkenlerini alır.
	- len uzunluğunda c karakterini *b değişkenine atar.
	- Asıl önemli kısım ise; bu işlemi yaparken doğrudan void *b üzerinden değil, *b'nin ram adresini işaretleyen ve fonksiyon içerisinde tanımlanan yeni bir **char \*dizi** değişkeni üzerinden yapmasıdır.
	- **dizi = b** ataması sayesinde iki değişkende pointer olduğu için dizi b'nin adresini tutacak ve iki pointerdan herhangi birinde yapılacak bir değişiklik diğerininde değerini değiştirecektir.
	- **libft** projesi genelinde mem (memory- bellek) ismiyle başlayan projelerin temel amaçları işlemleri adresleri birbirlerine eşlenmiş pointerlar üzerinden gerçekleştirmektir.
	- Dönüş değeri, fonksiyon içerisinde tanımlanmış void pointerdır.

- ***ft_bzero***
	- Fonksiyon parametresinde void tipinde *s ve size_t tipinde n değişkenlerini alır.
	- s pointerının n sayısında elemanına **null (\0)** değerini atar.
	- Dönüş değeri yoktur. Amacı verilen pointerı sıfırlamaktır.

- ***ft_memcpy***
	- Fonksiyon void *dest, const void *src ve size_t tipinde n değişkenlerini alır.
	- Amacı, src pointerının n uzunluğunda değerini dest pointerına kopyalamaktır.
	- İşlem, fonksiyon içerisinde tanımlanan ve adresleri src ve dest pointerlarının adreslerine işaretlenmiş s ve d pointerları üzerinden gerçekleştirilir.
	- Dönüş değeri fonksiyonun **void \*dest** parametresidir.

- ***ft_memmove***
	- Fonksiyon void *dst, const void *src ve size_t tipinde len değişkenlerini alır.
	- **ft_memcpy** ile aynı işlemi yapar. 
	- Farklı olarak dst pointerı src pointerından eleman sayısı olarak büyükse son indexten değilse ilk indexten kopyalama işlemine başlanır.
	-  Dönüş değeri fonksiyonun **void \*dst** parametresidir.
	
- ***ft_strlcpy***
	- Fonksiyon char *dst, const char *src ve size_t tipinde dstsize değişkenlerini alır.
	- src pointerından dst pointerına dstsize uzunluğunda karakter kopyalar.
	- **Not:** ft_memcpy, ft_memmove vb. fonksiyonlar işlemlerini parametrelerindeki pointerlerın adresini tutan başka pointerlar üzerinden yaparken **ft_strlcpy** vb. fonksiyonlar işlemlerini doğrudan parametrelerindeki fonksiyonlara uygular.
	- Kopyalama işlemi bittikten sonra son index null (\0) ile sonlandırılır.
	- **Dikkat:** Dizilerin sonuna (\0) koyma nedenimiz, işlemlerimizi yaparken dizinin sonuna geldiğimizi anlamamıza yardımcı olacak bir karaktere ihtiyaç duymamızdan kaynaklıdır.
		- Örneğin bunun yerin int bir dizinin (int *) sonuna **-1** koyarak veya char bir dizinin (char *) sonuna **random bir karakter mesela 'a'** koyarak da bu işlemi yapabiliriz. 
		- Bu durumda while döngüsü ile index i arttırıp elemanlarda gezerken son elemanı algılamak için -1 veya a karakterlerini kontrol etmemiz gerekir. 
	- Dönüş değeri **const char \*src** nin eleman sayısıdır.

- ***ft_strlcat***
	- Fonksiyon char *dst, const char *src ve size_t tipinde size değişkenlerini alır.
	- src pointerından dst pointerına **size indexten itibaren** kopyalama işlemi yapar. 
	- dst pointerının son indexine null (\0) karakterini atar.
	- Dönüş değeri size + src pointerının eleman sayısıdır.

- ***ft_toupper***
	- Fonksiyon parametresinde int tipinde c değişkenini alır.
	- Eğer **c** değişkeninden gelen karakter küçük harf ise karakteri büyük harfe dönüştürür ve karakteri geri döndürür. 
	- Ascii decimal karşılığı **97-122** aralığında olan küçük harf karakterlerinden başka bir karakter gelirse bir işleme tabi tutulmadan aynı karakter geri döndürülür. 
	- **Örneğin 'e' karakteri için;** e karakterinin ascii decimal değeri 101'dir. Bu değerden 32 çıkartıldığında 69 bulunur. 69 ise 'E' karakterinin ascii decimal değeridir.

- ***ft_tolower***
	- **ft_toupper** fonksiyonundaki işlemlerin neredeyse birebir aynısıdır. 
	- Tek farkı bu sefer büyük harfi küçük harfe çeviririz. 
	- Bu sebeple gelen karakter büyük harf ise karakterin ascii decimal değerine **+32** eklenir ve sonuç döndürülür.

- ***ft_strchr***
	- Fonksiyon parametresinde const char *s ve int tipince c değişkenlerini alır.
	- **Amacı:** Verilen s pointerının işaret ettiği adresten itibaren karakterleri gezmek ve **c** karakterini bulmaktır.
	- Bunu yapabilmek için null (\0) karakter bulunana kadar indexi arttırır. 
	- Eğer aranan **c** karakteri bulunursa **&** operatörü ile bulunan karakterin adresi döndürülür. 
	- Eğer aranan c karakteri **\0** ise bu karakterin adresi döndürülür.
	- Eğer karakter bulunamazsa **NULL** döndürülür.

- ***ft_strrchr***
	- Fonksiyon parametresinde const char *s ve int tipince c değişkenlerini alır.
	- **Şahsen** ft_strchr ve ft_strrchr arasındaki tek fark **strchr** bulunan karakteri parametresinde verilen pointer üzerinden döndürürken **strrchr** bulunan karakteri fonksiyon içinde tanımladığı yeni bir **char \*** üzerinden döndürür.

- ***ft_strncmp***
	- Fonksiyon parametresinde const char *s1, const char *2 ve size_t tipinde n değişkenlerini alır.
	- **Kullanım amacı** verilen iki char * arasında **n** uzunluğunda karakteri karşılaştırmaktır.
		- Sonuç **0** ise karakterler eşittir.
		- Sonuç **0'dan küçük** ise s1 < s2
		- Sonuç **0'dan büyük** ise s1 > s2

- ***ft_memchr***
	- Fonksiyon parametresinde const void *s, int c, ve size_t tipinde n değişkenlerini alır.
	- s pointerının içerisinde n uzunluğunda indexte c karakterini arar.
	- İşlemi fonksiyon içerisinde yeni tanımlanan ve **s** pointerının adres değerini tutan **src** pointerı üzerinden yürütür.
	- **Dikkat:** "src = (unsigned char *)s;" ataması esnasında parantez içerisinde yapılan işlem **cast** işlemidir.
		- s pointerı void tipinde olduğu için src pointerına buradan gelecek değerin **unsigned char \*** tipinde olacağı belirtilir.
	- Aranan karakter bulunursa karakterin **adresini** bulunamazsa NULL döndürür.

- ***ft_memcmp***
	- Fonksiyon parametresinde const void *s1, const void *s2 ve size_t tipinde n değişkenlerini alır.
	- **ft_strncmp** ile arasındaki fark, ft_memcmp fonksiyonunda yapılan işlemler s1 ve s2 pointerlarının adres değerlerini tutan **unsigned char \*** değişkenler üzerinden yürütülür.

- ***ft_strnstr***
	- Fonksiyon parametresinde const  char *str, const  char *aranan ve size_t tipinde len değişkenini alır.
	- str pointerının içerisinde len uzunluğunda aranan pointerının **tüm karakterlerini** arar.
	- Eğer aranan pointerının tüm karakterleri str pointerında mevcut ise aranan pointerının ilk karakterine denk gelen str pointerının indexinin adresi döndürülür.
		- **Örn:** \*aranan = kyil; *str= tarikyildirim;
		- **Return:** &str[4] (4. indexin adresi)

- ***ft_atoi***
	- Fonksiyon parametresinde const char tipinde *str değişkenini alır.
	- **Amacı:** string bir metinden (char array veya char *) rakamları alıp negatif veya pozitif bir sayıya çevirip döndürmektir.
	- Öncelikle ascii decimal değeri **0-13** olan karakterler ve **boşluk** karakteri geçilene kadar index arttırılır. 
	- Burada dizinin başındaki tab, boşluk gibi işlemimiz için anlam ifade etmeyen karakterleri geçmiş oluyoruz.
	- Ardından **ilk** ulaşılan karakterin "- veya +" olup olmadığına bakılır.
		- Eğer karakter **-** ise başta **1** olarak atanmış pn değeri **-1** olarak değiştirilir. Dönüş işlemi esnasında **sonuc**, pn değeri ile çarpılacaktır.
		- Eğer karakter **+** ise veya ikiside değilse pn **1** olarak bırakılır.
		- Ardından gelen karaktere ulaşmak için index bir arttırılır.
	- Eğer sıradaki karakter rakam ise while döngüsü çalışır ve gelen karakter **rakam** olmaya devam ettiği sürece çalışmaya devam eder.
		- Döngü içerisinde **sonuc** değişkeni her defasında **10** ile çarpılarak basamak arttırılır.
		- Ardından, gelen rakamın ascii decimal karşılığından **48** çıkarılıp elde edilen sayı sonuca eklenir.
		- **Örn:** sayı = 4 için; 4'ün ascii dec karşılığı 52'dir.
		- 52 - 48 = 4 rakamını verir. Ve bu rakam sonuc değişkenine eklenir.
	- Dönüş kısmında **sonuc** değişkeni **pn** değişkeni ile çarpılarak çıkan sonuç döndürülür.

- ***ft_calloc***
	- Fonksiyon parametresinde size_t tipinde count ve size değişkenlerini alır.
	- **Amacı:** tıpkı malloc gibi verilen size ve count değerleri kadar **bellek bloğu** tahsis edilmesini sağlayan fonksiyondur.
	- Başlangıçta void tipinde *src değişkeni tanımlanır.
	- Bu değişkene mallocla count ve size değişkenlerinin çarpımı kadar alan açılır. 
		- **Örn:** char *str = ft_calloc(3, sizeof(char));
		- char tipinin ramde kapladığı alan 1 bytedır.
		- 3*1 = 3.. str pointerı için bellekte 3 bytelık alan tahsis edilir.
		- Ardından *str şöyle doldurulabilir: str = {a, b, \0};
	- **ft_bzero** kullanılarak tahsis edilen belleğin tamamı sıfır **(\0)** ile doldurulur.
	- Dönüş değeri bellek bloğu tahsis edilmiş ve tahsis edilen alanı sıfır değer ile doldurulmuş **void \*src**dir.
	- **Yakalama işleminde cast edilir:** char *str = **(char \*)** ft_calloc(3, sizeof(char));

- ***ft_strdup***
	- Fonksiyon const char tipinde *s1 değişkenini alır.
	- **Amacı:** s1 pointerının işaret ettiği alandaki karakterleri fonksiyon içinde yeni tanımlanmış ve malloc ile bellekte alan tahsis edilmiş **char \*dest** değişkenine atamaktır.
	- Malloc ile alan açılırken **sizeof(char)** ile char tipinin byte değeri alınır.
	- Ardından bu değer s1 pointerının eleman sayısıyla çarpılır.
	- s1 pointerının değeri dest pointerına atandıktan sonra dest pointerının son indexine null **(\0)** atanır.
	- Dönüş değeri dest pointerıdır...

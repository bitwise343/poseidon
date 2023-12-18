#define C 0
#define S 1
#define M 2
#define P 3
#define C_t_3_size 81
#define S_t_3_size 285
#define M_t_3_size 3
#define P_t_3_size 3

static char * C_t_3_str[C_t_3_size] = {
  "0xee9a592ba9a9518d05986d656f40c2114c4993c11bb29938d21d47304cd8e6e",
  "0xf1445235f2148c5986587169fc1bcd887b08d4d00868df5696fff40956e864",
  "0x8dff3487e8ac99e1f29a058d0fa80b930c728730b7ab36ce879f3890ecf73f5",
  "0x84d520e4e5bb469e1f9075cb7c490efa59565eedae2d00ca8ef88ceea2b0197",
  "0x2d15d982d99577fa33da56722416fd734b3e667a2f9f15d8eb3e767ae0fd811e",
  "0xed2538844aba161cf1578a43cf0364e91601f6536a5996d0efbe65632c41b6d",
  "0x2600c27d879fbca186e739e6363c71cf804c877d829b735dcc3e3af02955e60a",
  "0x28f8bd44a583cbaa475bd15396430e7ccb99a5517440dfd970058558282bf2c5",
  "0x9cd7d4c380dc5488781aad012e7eaef1ed314d7f697a5572d030c55df153221",
  "0x11bb6ee1291aabb206120ecaace460d24b6713febe82234951e2bee7d0f855f5",
  "0x2d74e8fa0637d9853310f3c0e3fae1d06f171580f5b8fd05349cadeecfceb230",
  "0x2735e4ec9d39bdffac9bef31bacba338b1a09559a511a18be4b4d316ed889033",
  "0xf03c1e9e0895db1a5da6312faa78e971106c33f826e08dcf617e24213132dfd",
  "0x17094cd297bf827caf92920205b719c18741090b8f777811848a7e9ead6778c4",
  "0xdb8f419c21f92461fc2b3219465798348df90d4178042c81ba7d4b4d559e2b8",
  "0x243443613f64ffa417427ed5933fcfbc66809db60b9ca1724a22709ceceeece2",
  "0x22af49fbfd5d7e9fcd256c25c07d3dd8ecbbae6deecd03aa04bb191fada75411",
  "0x14fbd37fa8ad6e4e0c78a20d93c7230c4677f797b4327323f7f7c097c19420e0",
  "0x15a9298bbb882534d4b2c9fbc6e4ef4189420c4eb3f3e1ea22faa7e18b5ae625",
  "0x2f7de75f23ddaaa5221323ebceb2f2ac83eef92e854e75434c2f1d90562232bc",
  "0x36a4432a868283b78a315e84c4ae5aeca216f2ff9e9b2e623584f7479cd5c27",
  "0x2180d7786a8cf810e277218ab14a11e5e39f3c962f11e860ae1c5682c797de5c",
  "0xa268ef870736eebd0cb55be640d73ee3778990484cc03ce53572377eefff8e4",
  "0x1eefefe11c0be4664f2999031f15994829e982e8c90e09069df9bae16809a5b2",
  "0x27e87f033bd1e0a89ca596e8cb77fe3a4b8fb93d9a1129946571a3c3cf244c52",
  "0x1498a3e6599fe243321f57d6c5435889979c4f9d2a3e184d21451809178ee39",
  "0x27c0a41f4cb9fe67e9dd4d7ce33707f74d5d6bcc235bef108dea1bbebde507aa",
  "0x1f75230908b141b46637238b120fc770f4f4ae825d5004c16a7c91fe1dae280f",
  "0x25f99a9198e923167bba831b15fffd2d7b97b3a089808d4eb1f0a085bee21656",
  "0x101bc318e9ea5920d0f6acdc2bb526593d3d56ec8ed14c67622974228ba900c6",
  "0x1a175607067d517397c1334ecb019754ebc0c852a3cf091ec1ccc43207a83c76",
  "0xf02f0e6d25f9ea3deb245f3e8c381ee6b2eb380ba4af5c1c4d89770155df37b",
  "0x151d757acc8237af08d8a6677203ec9692565de456ae789ff358b3163b393bc9",
  "0x256cd9577cea143049e0a1fe0068dd20084980ee5b757890a79d13a3a624fad4",
  "0x513abaff6195ea48833b13da50e0884476682c3fbdd195497b8ae86e1937c61",
  "0x1d9570dc70a205f36f610251ee6e2e8039246e84e4ac448386d19dbac4e4a655",
  "0x18f1a5194755b8c5d5d7f1bf8aaa6f56effb012dd784cf5e044eec50b29fc9d4",
  "0x266b53b615ef73ac866512c091e4a4f2fa4bb0af966ef420d88163238eebbca8",
  "0x2d63234c9207438aa42b8de27644c02268304dfeb8c89a1a3f4fd6e8344ae0f7",
  "0x2ab30fbe51ee49bc7b3adde219a6f0b5fbb976205ef8df7e0021daee6f55c693",
  "0x1aee6d4b3ebe9366dcb9cce48969d4df1dc42abcd528b270068d9207fa6a45c9",
  "0x1891aeab71e34b895a79452e5864ae1d11f57646c60bb34aa211d123f6095219",
  "0x24492b5f95c0b0876437e94b4101c69118e16b2657771bd3a7caab01c818aa4b",
  "0x1752161b3350f7e1b3b2c8663a0d642964628213d66c10ab2fddf71bcfde68f",
  "0xab676935722e2f67cfb84938e614c6c2f445b8d148de54368cfb8f90a00f3a7",
  "0xb0f72472b9a2f5f45bc730117ed9ae5683fc2e6e227e3d4fe0da1f7aa348189",
  "0x16aa6f9273acd5631c201d1a52fc4f8acaf2b2152c3ae6df13a78a513edcd369",
  "0x2f60b987e63614eb13c324c1d8716eb0bf62d9b155d23281a45c08d52435cd60",
  "0x18d24ae01dde92fd7606bb7884554e9df1cb89b042f508fd9db76b7cc1b21212",
  "0x4fc3bf76fe31e2f8d776373130df79d18c3185fdf1593960715d4724cffa586",
  "0xd18f6b53fc69546cfdd670b41732bdf6dee9e06b21260c6b5d26270468dbf82",
  "0xba4231a918f13acec11fbafa17c5223f1f70b4cdb045036fa5d7045bd10e24",
  "0x7b458b2e00cd7c6100985301663e7ec33c826da0635ff1ebedd0dd86120b4c8",
  "0x1c35c2d96db90f4f6058e76f15a0c8286bba24e2ed40b16cec39e9fd7baa5799",
  "0x1d12bea3d8c32a5d766568f03dd1ecdb0a4f589abbef96945e0dde688e292050",
  "0xd953e20022003270525f9a73526e9889c995bb62fdea94313db405a61300286",
  "0x29f053ec388795d786a40bec4c875047f06ff0b610b4040a760e33506d2671e1",
  "0x4188e33735f46b14a4952a98463bc12e264d5f446e0c3f64b9679caaae44fc2",
  "0x149ec28846d4f438a84f1d0529431bb9e996a408b7e97eb3bf1735cdbe96f68f",
  "0xde20fae0af5188bca24b5f63630bad47aeafd98e651922d148cce1c5fdddee8",
  "0x12d650e8f790b1253ea94350e722ad2f7d836c234b8660edf449fba6984c6709",
  "0x22ab53aa39f34ad30ea96717ba7446aafdadbc1a8abe28d78340dfc4babb8f6c",
  "0x26503e8d4849bdf5450dabea7907bc3de0de109871dd776904a129db9149166c",
  "0x1d5e7a0e2965dffa00f5454f5003c5c8ec34b23d897e7fc4c8064035b0d33850",
  "0xee3d8daa098bee012d96b7ec48448c6bc9a6aefa544615b9cb3c7bbd07104cb",
  "0x1bf282082a04979955d30754cd4d9056fa9ef7a7175703d91dc232b5f98ead00",
  "0x7ae1344abfc6c2ce3e951bc316bee49971645f16b693733a0272173ee9ad461",
  "0x217e3a247827c376ec21b131d511d7dbdc98a36b7a47d97a5c8e89762ee80488",
  "0x215ffe584b0eb067a003d438e2fbe28babe1e50efc2894117509b616addc30ee",
  "0x1e770fc8ecbfdc8692dcedc597c4ca0fbec19b84e33da57412a92d1d3ce3ec20",
  "0x2f6243cda919bf4c9f1e3a8a6d66a05742914fc19338b3c0e50e828f69ff6d1f",
  "0x246efddc3117ecd39595d0046f44ab303a195d0e9cc89345d3c03ff87a11b693",
  "0x53e8d9b3ea5b8ed4fe006f139cbc4e0168b1c89a918dfbe602bc62cec6adf1",
  "0x1b894a2f45cb96647d910f6a710d38b7eb4f261beefff135aec04c1abe59427b",
  "0xaeb1554e266693d8212652479107d5fdc077abf88651f5a42553d54ec242cc0",
  "0x16a735f6f7209d24e6888680d1781c7f04ba7d71bd4b7d0e11faf9da8d9ca28e",
  "0x487b8b7fab5fc8fd7c13b4df0543cd260e4bcbb615b19374ff549dcf073d41b",
  "0x1e75b9d2c2006307124bea26b0772493cfb5d512068c3ad677fdf51c92388793",
  "0x5120e3d0e28003c253b46d5ff77d272ae46fa1e239d1c6c961dcb02da3b388f",
  "0xda5feb534576492b822e8763240119ac0900a053b171823f890f5fd55d78372",
  "0x2e211b39a023031a22acc1a1f5f3bb6d8c2666a6379d9d2c40cc8f78b7bd9abe"
};

static char * S_t_3_str[S_t_3_size] = {
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x3f0815ab463f1b76ee25a9b8768b3231a89752f427f4f063ab718e707576b31",
  "0x15648bf46f60d82954c7e33029b3617357012a3d3b1d34c8e008859f1dbfb317",
  "0x127e00c2253de07818ca7f2eafdd7564d05ea850cf61f1daa0cfefbf7fbfba85",
  "0x66365afd18a41ef9382fc0b1d265cb4d3ce470a8cbbb878f7d48051630747bd",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x219d14f823513140dc69a96f7fe7e086f4fa24c84e57dcf2b099715c4404aae7",
  "0x3a30bfbbf2cb86d4a6a63a8050d91f9f14f4d33696d37ebaefa9ac2302132d5",
  "0x2121bbcdeaa33a35b0270fb7d5c9f94edad5a84d74b06e3385104b0b41935bcc",
  "0x196b544fbeb0a792cfbb82c289e579b7cd5580c2e338a389d053ef8b3d10e70e",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2809c3a1547c0cee89c1db270ef479c26973ec73edb4bd4e7d907ea0202f560f",
  "0x11c34446b083ef92ca157585a02b8b342a4c67175b31f4b5d40d4e96dfc5c8f1",
  "0x253ea0b33a8bf3b2367c030e3289cbe0f6242ad7709d90b86d9d8026e2e39925",
  "0x30467dc1930f6afe90c89d4007ad29fc4f5a19c006d1030438c16df85637bd5f",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2f9d4b55495f7e377e20e6f5a3a88af7aa6a536458b38bbe13c8ebfbbba54f44",
  "0x1d9e9d5c736e3151f11d36d499e7e093d8ee2353be18aad54cfd03ff0feac4b8",
  "0x124b617b43e598f9ebf622f7823a3de7d1bfedb87e097c315f343de301e54841",
  "0x198e7cfc66ae45774055cf073bedc945a5f9c5b19cae08d789cc5748ffe199b2",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2eac25b3498dfadffd124ab3aad57789eb945ba57443099c5bb6c27ed977fe24",
  "0x1ee02c175cdfe1871b378305c1bb9c904e8af1d4454ed3550b3c6ab5f4f90126",
  "0x616f8c34c607266b29ea8f9d2dfa47ff6fbb1d9745c48609fa98301d0f679d5",
  "0x181d68b0a188504958b9f19cbbdb972a853e51ed385e4883a43a42832803370b",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2d5397ce863464a25d6b7f5b015d579181d1ce2f24cbabf6059e9327f5ba7004",
  "0x15bf817491b94d71e8912940cc0b80277713e7d32da2b6591724d8dbd4bc2618",
  "0x2a7cbd11460b177ab76feab28b69485ac8cc687740bc910994a3827d29c08714",
  "0xf7cd5ffa4661730ab56e447fae5cc1763cb462da80a85614c237b290de9d502",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0xe0766004b4c4176eb13273508eb6575f768137d86d305be644ce04531008100",
  "0x625fa7145813481f6d148be6b9c8bb7b54ee3c1afac00104e1f763000b9924c",
  "0x7c5472508b459916ee0f5461aad2e0b19cd9c7b184f515b65136318ce2c6a5",
  "0x567375470d189b693ac77ab3fb7557231d53073951d43c54685879cb7a89fcb",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x1d0406bcbec83f8d5165f56c063e42108ad21f51ea4bfc71601174ba5c7b8bcc",
  "0xc02b18eef22332d280a8aa1f86405f3375f06342f8696ee7c73b46c63272cb7",
  "0x17c1fc174cd9a6ebeaa7add2f801a664823509ad4fd1b15aad053a55ad6da4cf",
  "0x5f843c23024eb1dab7ebbc86709a021aaa6caf433f7ed258a08638e9584b32d",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x22df2420697ca28b5cc51c53165e002727b45ccd90a55c87589f792f0ad8cb37",
  "0x2f1438303a7b49d473400aaedf0f48009fd3af804b76be86417588efc4d7302a",
  "0x2323d5fcf2da8965c6b2b7b4fbf9a24bbaa7f4dccd35d5ca6155c5463093b23b",
  "0x26c85b9dfbbe48fe83b753a5e7336b9f40f7b961e9c54f94e37700073d4d26e",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x31511000251ec86feb38b5ab4e335f070b271df4c20979528e41d65384c318f",
  "0x18e588324a9bbaacb42fa69e5d90a0c0e27cd16b941e34a60ff5df9a26c03af1",
  "0x2642b5d8e16b953b070635775c8d3c9498357d6ad9bef2e7d99f03c10ea1f95f",
  "0x21fc313ba11c60e8e84ff60db906a0f031189b0b48335c4221f909aef836c133",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2d3562e3d4b42bc6890b698cc6ab89f7311298bcbac6e4e9f2f4d93d06dae151",
  "0xa74ef541d360e842e3e0b6ff7e5c7c77934a5f67616f01c189d886dfd2e0808",
  "0x140564b53e0a812ac3983d6e3b433afa43f434087d9e754967c2c9b1b02caf8a",
  "0x14709e32d98ae4cd18b400181e71ab9759c436c8e83fa6993adb6f2db6bba9d0",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x734b2366c59e394423f179e1266dd392372db4f2dba651f4a619a4b52bdc010",
  "0x11fb2d705c94b08d5ad3e3c5fb6629abe963ed92913642c7d02d7e71088fd2d4",
  "0x27d03abf5c1f290e5d715eba19371050ef6eb7f78fd84be834e4cc3618059484",
  "0x13ed9e9e6b452df27fb3353cfc2cd63ebe817f212a39c6a8bb9b441ac1395861",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x1319c51cf37aaa10246cdaaa04a12e88795de4452604263a7c5b79ab99cbd23c",
  "0xbca25588d187b7f9dad839f2c8cb526a4cf444eebbd0e715b6cea019ac3f2",
  "0x1d837ea0341c5964181226874b923cd01a069b493f02f7a3c01be23cf51d593f",
  "0x1b41ce9ed3634cbd42c427ce4c5c83774149e2a6dbd25f24012090db7de4e7f9",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x671f0e3b674ae7cddc790ecc4e946f4bca74b98b78a127c7b56bd6673f1ce1f",
  "0x19fc073797a39b272e40cd30615f55fefeb682c1ac14143071d0449a5426e4e",
  "0x17bee47d262a497fd1f7c5c6d5a7c70fa4209480bf5d97311c5096619e9fd13",
  "0x2073cff92d3141b480763539cff2978a4c7944721cc937ba00cc8527274471e3",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x3bd7b3e2c1885877f43182a55a91d48f9c58d152e730fe2c7aa46b1fa663baa",
  "0x226ebc9a538b5bbaff128edfb9bbf5fa0ceb100719a14c8dfed9ffbbbad9b6b7",
  "0xd395f0b08b9fede0373a06e1552c0e634a49572af1d830dc6e394e8a5d3b21a",
  "0x28242439b524540a30d49b68e19e31ba5284bd3bcf1e0f2f41f77d5331f99ffa",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x370d6fa19eaac142d2de034801ab85e0b457e129e91f929754b48c6154d4df6",
  "0x9a16f573b3280f390762abf269579eaa37939bc0c753feb0a2b2e0bcbde1659",
  "0x2228e360fb5b162b496ac443f98127ee3c0021a690b71b268d99981368231d97",
  "0x7e42c2ca633d2c49fabf83991476d209431e34d8032b6a1b97675f3c567f944",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2ce12d7269663770c3cab85a6215a32eed35fda1d8e9d753a50fe96097724a9f",
  "0x3d7427704c61e2009eeb9b1b45a0125084bc4daf70973a7ba0b2231815b15de",
  "0x10f8abf0764185861c1267fcf4b4b33ca096fb4ddc4626732d86921e553e69c6",
  "0x17ccaf6f26f7267a025d7cb456e3aeb251a1a620aaf6568a5c95644c7c5914cc",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x63bb306b96310051385c3ce00ca820ad0e3651a6e55754d59de6df28cea4d51",
  "0x1f761ee5553c5e86f2c304a18095ab7403242e0b65e608bc920cf993a4169974",
  "0xdc5f00bbfd7c1d9a23c0e666859ba6564bcde8761b45717cd6bdfc09de4e8f2",
  "0x6de511520e277b7df07c3536381c13eb44cf790a230abc391089760bfc40ef2",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2a134348c8660efcf9ef54863e70528a1fd4481b50a1fe21f24a8c06e10cca03",
  "0xaeb5023bbb9a64c4bd80089e99edf8ed5f6f1ffb63a7dbba1b33520bcfce37b",
  "0x141a6d0810366ae225ecb5f0bfdc9995406c5960ab26155836fc51fb7cb933d1",
  "0x9d2ea05ef54dadbbe776f404dca6626cc0b2539990bc0b8bfe87497f1e2c5b7",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x1e56d244a8e41be5d104d5f8ef70891d22d4a5432441bfe8ff1a16e91719cdde",
  "0x1d4f020c57c4f14aec908b2f99b5c4fd5e09447fa85c2fd68ba4d5c5f50c7b49",
  "0x763911a3a92a4f0e09f4e14cd03398d8d82a1e09db80fb0ee1e833764c18fd3",
  "0x12857275be2fe6b9ba2ec68f9061643f1fc5d9a2c5e47e55684366e54b302946",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2ed11ccd2e2e2376655ffe9a96c4b81adc0a60353c5d83d4d0ebf50d1bbf87c0",
  "0x3e31de8958e82645b320d5e3e966ef4726d5b1c2cfbb4acd288a21543c6d594",
  "0x11e880dfefdbd08858ae890046533d58da28a608d7e905366ec2ca4a36e71963",
  "0x1835b275deaed2d00704a9c3cc21ab7a44a34662978d53c190dc25e969a507b2",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x68b75315e25ed4ace5a4a9480e1d82ce5d44f76f1324240419f372ff8d3c3f5",
  "0x1b7ef7d04aec73d62b052d2ad12b92a4268fccd795c839d698ad3b22823274d1",
  "0x28c0c848022a90606f6193ff5501b57216b670727f4b8efcc240d30bbaa9f03f",
  "0x13bda49296cbcc51686a7bfb1c39f3f254370985a16660efd6e5d82d4f068e1b",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2e7987ea8204389d11eb10b34265e378a945729f86c3e0e2fd38490d3a594141",
  "0x826d4a2324ad3aa4b2b45c10a190fedef702aeffda3226ce5415fffd03935c8",
  "0x2dbeee85eaeaa9fa3675ef541c9df7bb964a85435c3b59685f93b434036ded",
  "0x227ee7a945edaee6919418ecb3279b11e6fa44f5f5c5abfb966a4be599cb86c7",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x1d0a6d1a9519877805ac90d696faf2a5ffadc23986de8c698d541471c7244220",
  "0x2208aaba508ae816da4f333b7854fbbcd10eea1db284ec3e9f4de02b25f6e9d4",
  "0x28a58901035b2c99e36a7d29b587a215c9e59268e2f8e01a175720971ccf04ec",
  "0x112f6d8d42b0a0d123a07865ca1376df317a2a14ffc0191226f38a8adfd6238",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x8c6eb19c016d1833174dda182d266d5c727f97fb4d01f1daf906b6d3c6e2308",
  "0x1359d2d6c8b5a116d0b38b95f9c642df75b1be9a48c8698ecfea9103f73f1879",
  "0x10c5052ec67ab9b6a467c1cc1878d91aaa07aacf7725f8a5ed42b699c4af3ca7",
  "0x583c4d292d54f3cdb708803e6338fc6afdb188d5d4e9f060193823684c96c75",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2d94a1c55be382151a4054c5b96322e7bcd1fe2b3e076e16ee2c18bfc06f57b4",
  "0x15e3402fdde8770fb997369579c1b1703ef77c671927ead80dbc64dd2211c3ec",
  "0x185be98784817f22f7b21e6b867d5a71b5000bef8bb902eb302677e20a727be3",
  "0x18db4321c721c03666ed8927c89890aa8aad1b00c054547b5ca14cd94de467b6",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2a852b6247f5d61f0c390b3f3d799188528849bcd2cd0aff4eb2134a039b5126",
  "0x2510aeed51b7f506e65fb9a18ee0124aa5276f6de1cd771b165930204da58f22",
  "0xf2074a32eb8260fb5bd3a236f03a47b47b7fb54dcad1d7977d6486513bab5f2",
  "0x2f4c69297866bd45a8270e19941926cec3531c9e12c4c2c84971404bfa044090",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x154668727d2dbadf05d083a65093c0d0e92df5fd5f3fd75e9b792c562a37473f",
  "0x1e6ffc5d6a1ff5dc4fd77fc5ab5c8c4e8d3e2e375bcd1194a91e5b0f7b13cadf",
  "0x2cf1a1d7c44309109d75acbc9395cb8398c8b2d428538571fafa389da29990c6",
  "0x140fb39a89f26f6d87cf76cd5ce8da47aa5d8a023e24cf016ecf64cf793c9880",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x1289d13d58a17b5bf0712b201fb3cddfce2c16dac159990b8298a93a8589f9e8",
  "0xf45cf974d2c9edb5781e8d3d207adc8370cf56bc5218749610920fe98b2db2e",
  "0x11909c81a16518046b79edfd24f5abcc585a81d1b333568b8687a1c9eceb44d4",
  "0x2990b23c81882f7709f3b891a0e3da4d6917672f2d5a1041fd7bbd6792330d16",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x609551b14716ca3cd5560e0821e7285e0a083ea9a16dc102ecf461e4aef7277",
  "0xc8c1abdfab99d03fd93dced2467354b6175de1755f4f93dc0880eaa08d03f77",
  "0x138bd098c4923b9fbd02f33f8bec6c730db3fed298ec09f78a7a55d08f2e0b10",
  "0x2e61e4bc021630114673f0f77161ae55dcd0b45ce07d9ae3f21bb5a3190f14c0",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x124860913e3df8f65a9c4060ce3297c626abd1c22401c905ddb408260d8e910",
  "0x13807f89c394a133ec104804d955cbe125f24c5701d98286c6ac8b7ed052ec8",
  "0x2e88d1a6938f0788132aa9eeaec08d2f59aa444050c8f4c4e85578abb0fc2fe5",
  "0x1f3d24f17cfc6050a0cbf64e1f1787e2257be3c3ba607c2e8fcc1f26abf3104",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x1fe1cb0e2ae169f83b9d4f133d41fb5b3fe6c76a82a916bfd9b62f82f0f8d0bf",
  "0xef79351229409cd353329221229827e19946f3d8d1c48bf5e3377f9177071f3",
  "0x18fb2e46fc1b90fe1c4893ef77a9d111507551883127860e89088608373beda9",
  "0x77afe2579f42ec14c32ef0761e23a3cc0ad6263a68c5cb61916bd57120d1868",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x79769092daa5a752642c04ccf8a6ea54e2ac9836fdd65d248b186f1490b7b99",
  "0x1d8bf229c19968f0254eb6e09c5c8bfd67eb9734606b676b663c76cf76bab4a5",
  "0x2a33b7d855e7fe55f93556e49e4b37737664f14236f17256428f29f6ec1bddad",
  "0x25b0331d7e2b15af4ec161c86e84ba6ab2056077e7aa7536340dc3187ccca8b2",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x762098f5fe26598ccbf45e4810211b0ffcf8ccbb92c16e2f4f13f22342474e2",
  "0xe234d720d70b2886d0da4c007b1bda42362e144185c70716dece2b6172c2514",
  "0x1d82bedccd2bc8a06e3742e720b7fec2ea72182f11c0c60d135c811152aa4b60",
  "0x480064d4b3eb0ada5e9a3e7d05930b7c3397fd6b94d481314bd1c690a17c979",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x10a892763b3cca9ef7593fbb1140edc8c8e4580568560cf41867f7464fb0c11a",
  "0xb5ec64548ea841ac921f9b2553680785978b315667ae4714dde4cd7f4de8b91",
  "0x10554aca4e348e5949761bd7131dfaebd78010edd030e1a9ce3c65c9db931d46",
  "0x15be66f38d86b0998b93655462b1f475b9be9de306e150d4ac648fab3db0cff6",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x176ad3600fd3491182d182957ffad01bf6c26e9d4ab0c23caaf308e427d3dbe8",
  "0x2b6f355b3dbf65f09335001d705ac125e3beb20f4fc11bd3ce82b5cf0af2e6f2",
  "0x1c85c06a6d5d40d81d7c89edefb32d1a8448c51288fa296b6de9ff788c77451",
  "0x20e1e876c4746a0cbd9a51d76b2e25f82361c389e43f7d1f51a70aaac2460d79",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x20e46219f684186d2a024b637bc35a29ee3b08ce737701392d987dda9217fa08",
  "0x2ea7279db9f2aa0f654e987907277c24480766367a8bd90e28be0f2ed6091367",
  "0x136be2a7f18924c9362096d472bc75ca0969dc077c9171b1641be95091780f74",
  "0x1ca2033501baa3f73067c4300fb0f51119ed5736fbc8f1f6c924baf0df5a0e9e",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0xa82f199c2505277ecaa75e495f34e3525824f7a4a9d9fa1da810832b48a50c7",
  "0xecf10485307b4bae92fefb0d7f7782a9f37a2722e7ed9eb7925a2dea580b7d5",
  "0x7b642138dfd6a6dd12aa22f08a8296d68615c8478f13af16aebbbb339a3936b",
  "0x1d9dda43a25593ffd2256d34921fb86ed70e760ba76d61e9cbc3b6dd0f1a2150",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2f1af228520c8b751dc91136c91c6bccd5367eb08213d392958ce2fd3d7d2fce",
  "0x1fecfe833ad540455c6d6c1ab3de4abae61ada625a1a2b6b18551a45a6cde123",
  "0x18fc8e608c735b2b3b0d7583460227575657ff8a77abe637bdd3ad28e4a23c88",
  "0x28f740bc1182e9706ebf03cb3f53aba8a43ce0b618783a5586388a7547faa815",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x47998cc0af5a26b94ad301e4b998d29e960a4851cfd13822bed35b7146966a4",
  "0x1b5f1525b31db911dda43e415e1b9a3a9725c7b52e880ee130a14a692b777b70",
  "0x275a83fa5d19b4535f65e965a90eac9bf770ae9bd1d7b1af945fa57ed5c8de6e",
  "0x2e8789257ed2cbcccb430568e49bc9dc2a563359808c9897ce3e40a6f6a27aa8",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x927f46cfe80feefeb2721a4c09e9d17f60c34500dcd6e41e2925a39c8e2c7c1",
  "0x1f868ae04832a5dbc37619bfe6ab6a97fd8fb2cfbc1ecf9e0e484bbfe7698101",
  "0x9d7a11e27d2f53109b73f745b2defed65d94ba80f308fb19ce6d56c9b45eff4",
  "0x282d857cfe8da3b5104e1c2823fb7c5b9a7b25924fda5995b0c351aa2b879dff",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x20ba8a9fcec815b13f349ff830ae663b27576e135c0744f6987fb0f6ff49c217",
  "0x11b6afc91e32f1ca4589fba12e657d226d57b471ddd2ab1b66a8ae4dcbfb136e",
  "0x2e666402ac9cc588316e335c7d93db344788eec2c72ddf3f908141736cebc3be",
  "0x17522e0e9e64f795a202a110e283faad7057aec5c9ed9a1a74920f2794f18595",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2d2ed17f7a1f3ee9e20b470cad4cc7319e6adb40e2ff24b7878cb9878edbd3b9",
  "0x1a81efb19d7e1edaa96fa276e89e85d08f75e54a8136f4d73c937da16c7bf9f4",
  "0x27ff57c1ca847e57210a7b44e52e5630f299c5f451c7a0d515a16bb3bd33e237",
  "0x1c1a8e22230abcd13c5be96031bfa167840d117b3c6a5a0a11be26a7f5fb1a94",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2a1c3f15d4927c843627a9cd533e4250d81e7774d2c32b59d5836f9c19a5657",
  "0x2ddbb7239eb904d81c52499b37cb4be1af0373a10ac112e185acb219899357e4",
  "0xdff198393085a754e0d6faec54be81d8edf8bc25edadab48a86fad6da0afb60",
  "0x10d50c2473146bbc76275fcc589d038dec8db28728789f28b6d5f504bd1645ca",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x61e8328fb5593f92a53dfd40e1022e6231ba45948506282536b08b4476c1538",
  "0x1b589243847198ded90b644bee31ac58067debf3f07d3c51cfa5a0dd9f6d9784",
  "0x4b00c0da1f851e59863b053bd4c6087190f0bdcced99d5ce6f67a420a3bd1f7",
  "0x239941a46c2b93d9126a70163009a7ac27f8a8d42e35018b3bec8cdcb5ddfd67",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x204f26ca7993b03ac2c35377cb0a3712bfc9bc3ec0bfecb4e87ef6814acf2ea2",
  "0x85aff9c7fdadba039d832d8be165a1e5747cf7308d515e348ef117e926d721c",
  "0x249042a8dc111f27c4ae9db044c0b0b3f10e57d05e093158efd375df00ea2068",
  "0x6e799bcdf2b4a74542854f3029803e2f84550665203327b3e0825977413e96b",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x1cb3caed4bffb6aca9f4d2c002921bc3fffed333cae12085c612496183b87996",
  "0xb47e9755fae480128a128bfd4faa6a3dd6ea03cab566889dcd99e84d310d51c",
  "0xc7e4cea365c2061920a0c9fd2c360a6506293bc024fd1ca3f0bb730da886a4f",
  "0x21da1f701bac77bcbbaa30d964d6f6f63dbe1b20d9d6988c8dcd7ba4187215df",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x9ae612e8ba1ca1370905fb67899d10db86b47bd19965b6edd1a9486e3c6cc55",
  "0x262e1e0b56cac47fc150f284491190e6aab75445b0c99373fe1f7a0e3b95cf3d",
  "0x234bf4a7dce7587c2c87c293e3bb7c9e2a7bfa5f29fd4ddeaa5d3f67491d34bd",
  "0x2f6cbac694c886b02d0a527cac744fb658d2690e213d7432eee67f6cb69f70c2",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x22accb18b7c49b4b7bb8c9fdf78b7aded52aa1842fff818d9a3300876dec3ad9",
  "0x81e2f0652f898c6d659f22d2c77be302eabd9182a0b3d3cbf623a1df7f8f2fc",
  "0x12c0a25e70d006eccea3ada75d669b8c534b962890f3ffc016b3186ad675b935",
  "0x10ef9c23848128cc2fd6fc869df24d7ab56efd349edd56f49f8d4f2381df3259",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x2161cd280772819dd4a81262b71df1bcc2c1d41b9491e0620bda347962b240f0",
  "0x2cebb0ae5108318eb406590041b5248292533364f799bc41b7f4fdd12cb8d38a",
  "0x2b2092f86b5979a7fe4f7c22d9561f3bf2852283a656880fb759e08709a0a62f",
  "0x1566b3402d774b8c08146188425a442450cfc900cf643e7382b2d8507a065fed",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x11a316aa31607f268fb4c56d6c57ba01627c3635fccf8d3d1a163e601d1a0173",
  "0xde7ee069c934256b782648b560e595408a5e8434644609152e353d9c2874e44",
  "0x2d36f4029245704cc84df0297708c5e5845c36ae706c72e67128b8949eab1af",
  "0x1b8cc326b5ee160f53198c217fb34e899bde46cd82dabdc284d7951d546f858",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x27625da0f73ea07110689fb2187b71694cbf9203fd4ddf8a96ece85407550ebb",
  "0x1cd8338a3e5b1ad7cdc0da581a6950f6dea349c3edda06cb99ba025b94e4790d",
  "0x5ea02d65b209f6da763856c94b6438c78a8aed8d3e67e877a10a84072741a56",
  "0x9f7cb68d4e388f85366cfcf284a895d8b6250ced627e810817743ce03330a55",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x18c6230ddc0f896827b043f5e58dbd1aec13995a202e4ebcdfeb969e9d5c1212",
  "0x73a6114b997285e1a91c0a0fdccdaa8452e4f07bfd2e1a10578232096db6dcd",
  "0x2e78746340b2a6d222c6a1fc0838adf5fe013f39b1660ce7a3e7742b2f37be7f",
  "0x7aa27e7150baddd06303ad8e5e4bf4249b7ea846553def28e675259d3e5c851",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0xb66fdec210ea4eabf623d2712cf4d9fa90273ccb4643f680cbc98345715ead8",
  "0x2fb6a29d9f394a589b633b8a4d6be51c9c0601ce0b140be641acea41c49aa5e3",
  "0x29025cc66fd041c4fc845e9c1c2cd1288569fb243d049bd675a69dc889b2ce2a",
  "0x150963f0aca9bcbe4126214ab9c627a6f7ed731cfa695168b85d534b17be3f48",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0xed59780302257663f72c1bfc6656eb7b5bca2e47bec0d5798a08a32a61a8a65",
  "0x7e19cb8a893369b3d30ae188c767f391c11888a3000debfc8d30c06143cc084",
  "0x600c7d2b6946345e5f1eeeafb5eb8ec2b6ecfe528d2c052cd860afb4a3aa272",
  "0x596083b6c972bc13022a1f33d6523b4773f2cd0a480e19ea0125119f0385705",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0x210b5c36f27a07d97f98b9d8663d85db2e64513099a8e1ef6db21043631e24c4",
  "0x13bb2764bf1475cfc7bb9f3d563c5cc201c2489874e9159326a8f4930b7883f9",
  "0x202cf557d625c26080eb082862a76757287872b181e89997219e4b7576e24d30",
  "0xe561c3f8bd4f76e76d49e97142d220601fbc5a03d905a4728ea1f95fd8824b2",
  "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
  "0xde20097480e7555471785de07bd9809d57dd859bbe827307c33ae9ed7890597",
  "0x72f2a6287fb984bb810df8c5788eebcfd2825613cb72bb80cde8edd76d2e97d",
  "0x2969f27eed31a480b9c36c764379dbca2cc8fdd1415c3dded62940bcde0bd771",
  "0x143021ec686a3f330d5f9e654638065ce6cd79e28c5b3753326244ee65a1b1a7"
};

static char * M_t_3_str[M_t_3_size][M_t_3_size] = {
  {
    "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
    "0x2969f27eed31a480b9c36c764379dbca2cc8fdd1415c3dded62940bcde0bd771",
    "0x143021ec686a3f330d5f9e654638065ce6cd79e28c5b3753326244ee65a1b1a7"
  },
  {
    "0x16ed41e13bb9c0c66ae119424fddbcbc9314dc9fdbdeea55d6c64543dc4903e0",
    "0x2e2419f9ec02ec394c9871c832963dc1b89d743c8c7b964029b2311687b1fe23",
    "0x176cc029695ad02582a70eff08a6fd99d057e12e58e7d7b6b16cdfabc8ee2911"
  },
  {
    "0x2b90bba00fca0589f617e7dcbfe82e0df706ab640ceb247b791a93b74e36736d",
    "0x101071f0032379b697315876690f053d148d4e109f5fb065c8aacc55a0f89bfa",
    "0x19a3fc0a56702bf417ba7fee3802593fa644470307043f7773279cd71d25d5e0"
  }
};

static char * P_t_3_str[P_t_3_size][P_t_3_size] = {
  {
    "0x109b7f411ba0e4c9b2b70caf5c36a7b194be7c11ad24378bfedb68592ba8118b",
    "0x1e6f20a11d1e31e43f83dcedddb9a0236203f5f24ae72c925a8a79a66831f51d",
    "0x1bd8c528472e57bdc722a141f8785694484f426725403ae24084e3027e782467"
  },
  {
    "0x16ed41e13bb9c0c66ae119424fddbcbc9314dc9fdbdeea55d6c64543dc4903e0",
    "0x2d51ba82c8073c6d6bacf1ad5e56655b7143625b0a9e9c3190527a1a5f05079a",
    "0x1b07d6d51e6f7e97e0ab10fc2e51ea83ce0611f940ff0731b5f927fe8d6a77c9"
  },
  {
    "0x2b90bba00fca0589f617e7dcbfe82e0df706ab640ceb247b791a93b74e36736d",
    "0x11e12a40d262ae88e8376f62d19edf43093cdef1ccf34d985a3e53f0bc5765a0",
    "0x221c170e4d02a2479c6f3e47b5ff55781574f980d89038308a3ef37cce8463bd"
  }
};

void init_t_3(mpz_t ** constants) {
  for (int i = 0; i < C_t_3_size; i++) {
    mpz_init(constants[C][i]);
    mpz_set_str(constants[C][i], C_t_3_str[i], 0);
  }
  for (int i = 0; i < S_t_3_size; i++) {
    mpz_init(constants[S][i]);
    mpz_set_str(constants[S][i], S_t_3_str[i], 0);
  }
  for (int i = 0; i < M_t_3_size; i++) {
    for (int j = 0; j < M_t_3_size; j++) {
      mpz_init(constants[M][i*M_t_3_size + j]);
      mpz_set_str(constants[M][i*M_t_3_size + j], M_t_3_str[i][j], 0);
    }
  }
  for (int i = 0; i < P_t_3_size; i++) {
    for (int j = 0; j < P_t_3_size; j++) {
      mpz_init(constants[P][i*P_t_3_size + j]);
      mpz_set_str(constants[P][i*P_t_3_size + j], P_t_3_str[i][j], 0);
    }
  }
}

void clear_t_3(mpz_t * constants[4]) {
  for (int i = P_t_3_size-1; i >= 0; i--) {
    for (int j = P_t_3_size-1; j >= 0; j--)
      mpz_clear(constants[P][i*P_t_3_size + j]);
  }
  for (int i = M_t_3_size-1; i >= 0; i--) {
    for (int j = M_t_3_size-1; j >= 0; j--)
      mpz_clear(constants[M][i*3 + j]);
  }
  for (int i = S_t_3_size-1; i >= 0; i--)
    mpz_clear(constants[S][i]);
  for (int i = C_t_3_size-1; i >= 0; i--)
    mpz_clear(constants[C][i]);
}

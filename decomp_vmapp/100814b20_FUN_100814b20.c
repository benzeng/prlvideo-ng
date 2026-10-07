
void FUN_100814b20(void)

{
  int iVar1;
  long lVar2;
  int local_1c;
  long local_18;
  
  DAT_1011c0540 = FUN_100890b50("DES-CBC");
  DAT_1011c0548 = FUN_100890b50("DES-EDE3-CBC");
  DAT_1011c0550 = FUN_100890b50("RC4");
  DAT_1011c0558 = FUN_100890b50("RC2-CBC");
  DAT_1011c0560 = FUN_100890b50("IDEA-CBC");
  DAT_1011c0570 = FUN_100890b50("AES-128-CBC");
  DAT_1011c0578 = FUN_100890b50("AES-256-CBC");
  DAT_1011c0580 = FUN_100890b50("CAMELLIA-128-CBC");
  DAT_1011c0588 = FUN_100890b50("CAMELLIA-256-CBC");
  DAT_1011c0590 = FUN_100890b50("gost89-cnt");
  DAT_1011c0598 = FUN_100890b50("SEED-CBC");
  DAT_1011c05a0 = FUN_100890b50("id-aes128-GCM");
  DAT_1011c05a8 = FUN_100890b50("id-aes256-GCM");
  DAT_1011c05b0 = FUN_100890b60("MD5");
  DAT_1011c05e0 = FUN_1008946d0(DAT_1011c05b0);
  if (DAT_1011c05e0 < 0) {
    FUN_10081d560("ssl_ciph.c",0x1a2,"ssl_mac_secret_size[SSL_MD_MD5_IDX] >= 0");
  }
  DAT_1011c05b8 = FUN_100890b60("SHA1");
  DAT_1011c05e4 = FUN_1008946d0(DAT_1011c05b8);
  if (DAT_1011c05e4 < 0) {
    FUN_10081d560("ssl_ciph.c",0x1a6,"ssl_mac_secret_size[SSL_MD_SHA1_IDX] >= 0");
  }
  DAT_1011c05c0 = FUN_100890b60("md_gost94");
  if (DAT_1011c05c0 != 0) {
    DAT_1011c05e8 = FUN_1008946d0(DAT_1011c05c0);
    if (DAT_1011c05e8 < 0) {
      FUN_10081d560("ssl_ciph.c",0x1ac,"ssl_mac_secret_size[SSL_MD_GOST94_IDX] >= 0");
    }
  }
  DAT_1011c05c8 = FUN_100890b60("gost-mac");
  local_18 = 0;
  local_1c = 0;
  lVar2 = FUN_1008a99c0(&local_18,"gost-mac",0xffffffff);
  if (lVar2 != 0) {
    iVar1 = FUN_1008a9e80(&local_1c,0,0,0,0,lVar2);
    if (iVar1 < 1) {
      local_1c = 0;
    }
  }
  if (local_18 != 0) {
    FUN_10087a5e0();
  }
  DAT_1011a940c = local_1c;
  if (local_1c != 0) {
    DAT_1011c05ec = 0x20;
  }
  DAT_1011c05d0 = FUN_100890b60("SHA256");
  DAT_1011c05f0 = FUN_1008946d0(DAT_1011c05d0);
  DAT_1011c05d8 = FUN_100890b60("SHA384");
  DAT_1011c05f4 = FUN_1008946d0(DAT_1011c05d8);
  return;
}


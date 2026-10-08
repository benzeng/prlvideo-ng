
void FUN_100bea290(void)

{
  int iVar1;
  long lVar2;
  int local_1c;
  long local_18;
  
  DAT_102315f30 = FUN_100c6bd50("DES-CBC");
  DAT_102315f38 = FUN_100c6bd50("DES-EDE3-CBC");
  DAT_102315f40 = FUN_100c6bd50("RC4");
  DAT_102315f48 = FUN_100c6bd50("RC2-CBC");
  DAT_102315f50 = FUN_100c6bd50("IDEA-CBC");
  DAT_102315f60 = FUN_100c6bd50("AES-128-CBC");
  DAT_102315f68 = FUN_100c6bd50("AES-256-CBC");
  DAT_102315f70 = FUN_100c6bd50("CAMELLIA-128-CBC");
  DAT_102315f78 = FUN_100c6bd50("CAMELLIA-256-CBC");
  DAT_102315f80 = FUN_100c6bd50("gost89-cnt");
  DAT_102315f88 = FUN_100c6bd50("SEED-CBC");
  DAT_102315f90 = FUN_100c6bd50("id-aes128-GCM");
  DAT_102315f98 = FUN_100c6bd50("id-aes256-GCM");
  DAT_102315fa0 = FUN_100c6bd60("MD5");
  DAT_102315fd0 = FUN_100c6fc50(DAT_102315fa0);
  if (DAT_102315fd0 < 0) {
    FUN_100bf2cd0("ssl_ciph.c",0x1a2,"ssl_mac_secret_size[SSL_MD_MD5_IDX] >= 0");
  }
  DAT_102315fa8 = FUN_100c6bd60("SHA1");
  DAT_102315fd4 = FUN_100c6fc50(DAT_102315fa8);
  if (DAT_102315fd4 < 0) {
    FUN_100bf2cd0("ssl_ciph.c",0x1a6,"ssl_mac_secret_size[SSL_MD_SHA1_IDX] >= 0");
  }
  DAT_102315fb0 = FUN_100c6bd60("md_gost94");
  if (DAT_102315fb0 != 0) {
    DAT_102315fd8 = FUN_100c6fc50(DAT_102315fb0);
    if (DAT_102315fd8 < 0) {
      FUN_100bf2cd0("ssl_ciph.c",0x1ac,"ssl_mac_secret_size[SSL_MD_GOST94_IDX] >= 0");
    }
  }
  DAT_102315fb8 = FUN_100c6bd60("gost-mac");
  local_18 = 0;
  local_1c = 0;
  lVar2 = FUN_100c84f40(&local_18,"gost-mac",0xffffffff);
  if (lVar2 != 0) {
    iVar1 = FUN_100c85400(&local_1c,0,0,0,0,lVar2);
    if (iVar1 < 1) {
      local_1c = 0;
    }
  }
  if (local_18 != 0) {
    FUN_100c557e0();
  }
  DAT_1023031dc = local_1c;
  if (local_1c != 0) {
    DAT_102315fdc = 0x20;
  }
  DAT_102315fc0 = FUN_100c6bd60("SHA256");
  DAT_102315fe0 = FUN_100c6fc50(DAT_102315fc0);
  DAT_102315fc8 = FUN_100c6bd60("SHA384");
  DAT_102315fe4 = FUN_100c6fc50(DAT_102315fc8);
  return;
}


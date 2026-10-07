
void FUN_1008ca600(void)

{
  long lVar1;
  
  FUN_100885590(DAT_1011c2a10,FUN_1008ca690);
  lVar1 = 0;
  do {
    if ((&DAT_1011b2040 + lVar1 != (undefined *)0x0) &&
       ((*(uint *)((long)&DAT_1011b2048 + lVar1) & 1) != 0)) {
      if ((*(uint *)((long)&DAT_1011b2048 + lVar1) & 2) != 0) {
        FUN_10081e1a0(*(undefined8 *)((long)&PTR_s_SSL_client_1011b2058 + lVar1));
        FUN_10081e1a0(*(undefined8 *)((long)&PTR_s_sslclient_1011b2060 + lVar1));
      }
      FUN_10081e1a0(&DAT_1011b2040 + lVar1);
    }
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0x1b0);
  DAT_1011c2a10 = 0;
  return;
}


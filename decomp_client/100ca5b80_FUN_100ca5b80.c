
void FUN_100ca5b80(void)

{
  long lVar1;
  
  FUN_100c60790(DAT_102318450,FUN_100ca5c10);
  lVar1 = 0;
  do {
    if ((&DAT_10230be10 + lVar1 != (undefined *)0x0) &&
       ((*(uint *)((long)&DAT_10230be18 + lVar1) & 1) != 0)) {
      if ((*(uint *)((long)&DAT_10230be18 + lVar1) & 2) != 0) {
        FUN_100bf3910(*(undefined8 *)((long)&PTR_s_SSL_client_10230be28 + lVar1));
        FUN_100bf3910(*(undefined8 *)((long)&PTR_s_sslclient_10230be30 + lVar1));
      }
      FUN_100bf3910(&DAT_10230be10 + lVar1);
    }
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0x1b0);
  DAT_102318450 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100472d40(void)

{
  _DAT_1011cc788 = QString::fromAscii_helper("empty",5);
  ___cxa_atexit(FUN_10002f530,&DAT_1011cc788,0x100000000);
  _DAT_1011cc790 = QString::fromAscii_helper("active",6);
  ___cxa_atexit(FUN_10002f530,&DAT_1011cc790,0x100000000);
  _DAT_1011cc798 = QString::fromAscii_helper("canceled",8);
  ___cxa_atexit(FUN_10002f530,&DAT_1011cc798,0x100000000);
  _DAT_1011cc7a0 = QString::fromAscii_helper("broken",6);
  ___cxa_atexit(FUN_10002f530,&DAT_1011cc7a0,0x100000000);
  _DAT_1011cc7a8 =
       QString::fromAscii_helper
                 ("([^\\.]+)\\.([^\\.]+)\\.(guest|host|client|general|monitor|remote)\\.(mac|lin|win|cross)(\\.[^\\.]+)*"
                  ,0x5e);
  ___cxa_atexit(FUN_10002f530,&DAT_1011cc7a8,0x100000000);
  return;
}


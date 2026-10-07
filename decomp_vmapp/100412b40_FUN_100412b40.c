
void FUN_100412b40(long param_1,QString *param_2,QString *param_3)

{
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","PrlPsConverter",1,"[PrlPostscript] PSConverter::init started.");
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  QString::operator=((QString *)(param_1 + 0x10),param_2);
  QString::operator=((QString *)(param_1 + 0x18),param_3);
  return;
}


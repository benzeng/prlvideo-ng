
void FUN_100214f00(long *param_1)

{
  long *plVar1;
  char cVar2;
  QImage local_40 [32];
  
  if (param_1[5] != 0) {
    QImage::QImage(local_40,(QImage *)(param_1[5] + 0x18));
    QImage::operator=((QImage *)(param_1 + 7),local_40);
    QImage::~QImage(local_40);
    cVar2 = QImage::isNull();
    if (cVar2 != '\0') {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Recieved empty screen image");
    }
    plVar1 = (long *)param_1[5];
    if (plVar1 != (long *)0x0) {
      param_1[5] = 0;
      (**(code **)(*plVar1 + 0x20))();
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error: can\'t get image converter to update suspended screen");
                    /* WARNING: Could not recover jumptable at 0x000100214fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}


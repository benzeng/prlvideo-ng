
void FUN_100ac6130(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  cVar1 = FUN_100ad42c0();
  if ((cVar1 != '\0') && (param_3 != '\0')) {
    local_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    local_28 = 0;
    local_48 = 0x100000008;
    FUN_100acb230(*(undefined8 *)(param_1 + 0x10),0x10,&local_48,0x24);
    QTimer::start((int)param_1 + 0xb28);
  }
  return;
}


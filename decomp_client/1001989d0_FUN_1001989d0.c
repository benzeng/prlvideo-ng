
undefined8 FUN_1001989d0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  Data_conflict local_30;
  undefined4 local_28;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 200) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 200) + 4) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
  }
  iVar1 = FUN_100319b00(uVar2);
  uVar2 = 0;
  if (iVar1 == param_2) {
    uVar2 = _PrlVm_GetSuspendedScreen(*(undefined8 *)(param_1 + 0x40));
    local_28 = 0x80000000;
    local_30.field7 = 0;
    uVar2 = FUN_100191960(param_1,uVar2,0x405,&local_30);
    QVariant::~QVariant((QVariant *)&local_30);
  }
  return uVar2;
}


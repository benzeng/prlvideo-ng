
void FUN_100353c30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  QImage local_38 [32];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100323e00(uVar2);
  lVar3 = FUN_100319390(uVar2);
  if (lVar3 != 0) {
    iVar1 = FUN_10018a9d0(lVar3);
    if (((iVar1 != 0x30000009) && (iVar1 = FUN_10018a9d0(lVar3), iVar1 != 0x30000010)) &&
       (iVar1 = FUN_10018a9d0(lVar3), iVar1 != 0x30000006)) {
      return;
    }
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    local_40 = 0xffffffffffffffff;
    FUN_100326550(local_38,uVar2,&local_40);
    FUN_100354140(param_1,local_38);
    QImage::~QImage(local_38);
  }
  return;
}


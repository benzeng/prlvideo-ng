
undefined4 FUN_100299d60(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar4 = FUN_100031930();
  iVar2 = FUN_1000333e0(lVar4,*(undefined4 *)(lVar4 + 0x18));
  iVar3 = FUN_1000333e0(lVar4);
  if (((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    QObject::property((char *)&local_48);
    QVariant::toString();
    QVariant::~QVariant(&local_48);
  }
  if (iVar2 != iVar3) {
    FUN_100358df0(&local_38,iVar3);
  }
  cVar1 = FUN_1001c1e50(*(undefined4 *)(param_1 + 0x18),0);
  uVar5 = 0x80000005;
  if (cVar1 != '\0') {
    uVar5 = 0;
  }
  if (iVar2 != iVar3) {
    FUN_100358df0(&local_38,iVar2);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar5;
}



void FUN_10027ea60(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  QHostAddress local_50 [12];
  undefined4 local_44;
  uint *local_40;
  __less local_38 [8];
  
  *param_2 = 0;
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != *(long *)(param_2 + 8)) {
    *(ulong *)(param_2 + 0x10) =
         (~((lVar1 + -4) - *(long *)(param_2 + 8)) & 0xfffffffffffffffcU) + lVar1;
  }
  local_40 = (uint *)PTR_shared_null_100ba2188;
  iVar4 = FUN_1006cd760(&local_40,0);
  bVar3 = true;
  if (-1 < iVar4) {
    if (1 < *local_40) {
      FUN_10027f000(&local_40,local_40[1]);
    }
    puVar5 = local_40 + (long)(int)local_40[2] * 2 + 4;
    bVar3 = false;
    while( true ) {
      if (1 < *local_40) {
        FUN_10027f000(&local_40,local_40[1]);
      }
      if (puVar5 == local_40 + (long)(int)local_40[3] * 2 + 4) break;
      lVar1 = **(long **)puVar5;
      iVar4 = QString::compare_helper
                        (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),param_1,
                         0xffffffff,1);
      if (iVar4 == 0) {
        QHostAddress::QHostAddress(local_50,(QString *)(*(long *)puVar5 + 8));
        local_44 = QHostAddress::toIPv4Address();
        puVar2 = *(undefined4 **)(param_2 + 0x10);
        if (puVar2 == *(undefined4 **)(param_2 + 0x18)) {
          FUN_10027f110(param_2 + 8,&local_44);
        }
        else {
          *puVar2 = local_44;
          *(undefined4 **)(param_2 + 0x10) = puVar2 + 1;
        }
        QHostAddress::~QHostAddress(local_50);
      }
      puVar5 = puVar5 + 2;
    }
  }
  FUN_10064f8a0(&local_40);
  if (!bVar3) {
    std::__sort<std::__less<unsigned_int,unsigned_int>&,unsigned_int*>
              (*(uint **)(param_2 + 8),*(uint **)(param_2 + 0x10),local_38);
    *param_2 = 1;
  }
  return;
}


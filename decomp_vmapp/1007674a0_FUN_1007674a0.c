
undefined1 FUN_1007674a0(long param_1,char *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  void *pvVar5;
  size_t sVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  QString local_58;
  QFile local_50 [16];
  void *local_40;
  uint local_38;
  
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) {
    lVar10 = 0;
    FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
    plVar7 = *(long **)(param_1 + 0x10);
  }
  else {
    lVar10 = *plVar7;
    if ((lVar10 != 0) && (plVar7[4] == 0)) {
      lVar4 = FUN_1007d87f0();
      plVar7 = *(long **)(param_1 + 0x10);
      plVar7[4] = lVar4;
    }
    *plVar7 = 0;
  }
  if (plVar7 == (long *)0x0) {
    FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
    FUN_100762800(param_1,lVar10);
  }
  else {
    uVar1 = (ulong)*(uint *)(plVar7 + 1) % (ulong)*(uint *)(param_1 + 0x1c);
    if ((plVar7[uVar1 * 2 + 6] & 0xffffffffffffU) == 0) {
      iVar8 = (int)uVar1 << 4;
    }
    else {
      iVar8 = *(uint *)(param_1 + 0x1c) * 0x10 + 0x10;
    }
    uVar9 = iVar8 + 0x30;
    pvVar5 = _malloc((ulong)uVar9);
    local_40 = pvVar5;
    local_38 = uVar9;
    cVar2 = FUN_100767790(param_1,&local_40);
    FUN_100762800(param_1,lVar10);
    if (cVar2 != '\0') {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","etrace",1,"Etrace dump, path=\"%s\"",param_2);
      }
      iVar8 = -1;
      if (param_2 != (char *)0x0) {
        sVar6 = _strlen(param_2);
        iVar8 = (int)sVar6;
      }
      local_58.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(param_2,iVar8);
      QFile::QFile(local_50,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          UNLOCK();
          local_40 = (void *)CONCAT71(local_40._1_7_,*(int *)local_58.field0_0x0 != 0);
          if (*(int *)local_58.field0_0x0 != 0) goto LAB_10076763e;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_10076763e:
      uVar3 = FUN_100762da0(pvVar5,uVar9,local_50);
      _free(pvVar5);
      QFile::~QFile(local_50);
      return uVar3;
    }
  }
  FUN_1008e3970("","etrace",0,"Etrace dump failed");
  return 0;
}


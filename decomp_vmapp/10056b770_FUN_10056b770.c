
void FUN_10056b770(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  plVar1 = *(long **)(param_1 + 0x10);
  lVar2 = plVar1[2];
  lVar3 = plVar1[5];
  uVar5 = *(uint *)(param_1 + 8);
  QMutex::lock();
  uVar5 = uVar5 & 0xfc;
  plVar4 = *(long **)(lVar2 + 0x128);
  if ((uVar5 == 0) && (plVar1[6] != -1)) {
    uVar7 = (**(code **)(**(long **)(lVar3 + 0x20) + 0x350))();
    FUN_1005ac8e0(uVar7,plVar1[6]);
  }
  *(long *)(param_1 + 0x48) = plVar1[4];
  *(long *)(param_1 + 0x10) = plVar1[3];
  FUN_10070aed0(param_1);
  iVar6 = *(int *)(lVar3 + 0x2c);
  if (iVar6 == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","CurrentFlush->DioCnt",
                  "DiskStatesImp.cpp",0x7ed,"FlushCache_DioCallback");
    iVar6 = *(int *)(lVar3 + 0x2c);
  }
  *(int *)(lVar3 + 0x2c) = iVar6 + -1;
  if ((uVar5 != 0) && (-1 < *(int *)(lVar3 + 0x30))) {
    *(undefined4 *)(lVar3 + 0x30) = 0x80000016;
  }
  if (plVar1 == plVar4) {
    if ((((*plVar1 == plVar1[2] + 0x128) || (*(long *)(*plVar1 + 0x28) != plVar1[5])) &&
        ((plVar1[1] == plVar1[2] + 0x128 || (*(long *)(plVar1[1] + 0x28) != plVar1[5])))) &&
       (*(long *)(lVar3 + 0x10) != 0)) {
      *(int *)(lVar2 + 0x150) = *(int *)(lVar2 + 0x150) + 1;
      *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
      plVar4 = *(long **)(*(long *)(lVar3 + 0x20) + 0x1290);
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar2,FUN_10056bff0,lVar3);
    }
  }
  plVar4 = (long *)plVar1[1];
  lVar2 = *plVar1;
  *(long **)(lVar2 + 8) = plVar4;
  *plVar4 = lVar2;
  *plVar1 = 0x112233;
  plVar1[1] = (long)&DAT_00445566;
  _free(plVar1);
  QMutex::unlock();
  return;
}


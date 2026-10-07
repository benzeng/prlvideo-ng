
int FUN_1000a4290(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  QString local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_38);
  uVar1 = *(uint *)(param_1 + 0x5ac);
  uVar2 = *(uint *)(param_1 + 0x5b0);
  pvVar4 = operator_new(0x100,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar4 == (void *)0x0) {
    *(undefined8 *)(param_1 + 0x1940) = 0;
    FUN_1008e3970("","vm",0,"[VmAllocateGuestMemory] new operator failed");
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    iVar3 = -0x7ffffe78;
    FUN_100408ff0(param_1 + 0x10b0,0x80000188,&local_58);
    FUN_10002d9d0(&local_58);
    goto LAB_1000a4452;
  }
  FUN_10008ac00(pvVar4,param_1);
  uVar5 = (ulong)uVar1 * 0x100000 + 0x1fffff & 0x1fffffffe00000;
  uVar6 = (ulong)uVar2 * 0x100000 + 0x1fffff & 0x1fffffffe00000;
  *(void **)(param_1 + 0x1940) = pvVar4;
  FUN_1000a3f40(param_1,local_38,uVar6 + uVar5);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x109c8) + 0x1f0);
  iVar3 = FUN_10008b0a0(*(undefined8 *)(param_1 + 0x1940),param_1,local_38,uVar5,uVar6,
                        (uVar1 & 0x2000000) >> 0x19,(uVar1 & 0x8000000) >> 0x1b);
  if (-1 < iVar3) goto LAB_1000a4452;
  if (iVar3 == -0x7ffffd69) {
LAB_1000a43ac:
    FUN_1008e3970("","vm",0,"Failed to allocate the guest memory object");
  }
  else {
    if (iVar3 == -0x7ffffe78) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_100408ff0(param_1 + 0x10b0,0x80000188,&local_78);
      FUN_10002d9d0(&local_78);
      goto LAB_1000a43ac;
    }
    FUN_1008e3970("","vm",0,"Failed to init the guest memory object");
    FUN_1000c81f0(*(undefined8 *)(param_1 + 0x109c8),0);
    QFile::remove((QString *)(*(long *)(param_1 + 0x109c8) + 0x1d0));
    QFileInfo::absoluteFilePath();
    QFile::remove(&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000a43ca;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
  }
LAB_1000a43ca:
  pvVar4 = *(void **)(param_1 + 0x1940);
  if (pvVar4 != (void *)0x0) {
    FUN_10008abf0(pvVar4);
    operator_delete(pvVar4);
  }
  *(undefined8 *)(param_1 + 0x1940) = 0;
LAB_1000a4452:
  QFileInfo::~QFileInfo(local_38);
  return iVar3;
}


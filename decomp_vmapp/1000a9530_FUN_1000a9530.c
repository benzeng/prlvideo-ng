
void FUN_1000a9530(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x1ab8) = 0;
  *(undefined1 *)(param_1 + 0x109ec) = 0;
  if ((*(byte *)(param_1 + 0x1ab1) & 0x20) != 0) {
    FUN_1000a9950(param_1,2);
  }
  *(undefined1 *)(DAT_1011c3650 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x1948) == 5) {
    FUN_1000aa320(param_1);
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar3 = FUN_100409070(param_1 + 0x10b0);
  if (cVar3 != '\0') {
    FUN_1000aa4c0(&local_48,param_1);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000a95fa;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1000a95fa:
  if (*(long *)(param_1 + 0x1a38) != 0) {
    FUN_1002af430(*(long *)(param_1 + 0x1a38),0);
  }
  if ((*(byte *)(param_1 + 0x1ab0) & 2) != 0) {
    FUN_1000a2100(param_1);
  }
  if (*(long **)(param_1 + 0x107e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x107e8) + 8))();
    *(undefined8 *)(param_1 + 0x107e8) = 0;
  }
  if (*(long **)(param_1 + 0x107f0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x107f0) + 8))();
    *(undefined8 *)(param_1 + 0x107f0) = 0;
  }
  if ((*(byte *)(param_1 + 0x1ab0) & 1) != 0) {
    FUN_100096710(param_1);
  }
  FUN_100258730();
  FUN_1002ef560();
  uVar4 = *(ulong *)(param_1 + 0x1ab0);
  uVar5 = extraout_RDX;
  if ((uVar4 & 0x200) != 0) {
    iVar1 = *(int *)(param_1 + 0x1164);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x5d8);
      *(int *)(param_1 + 0x1164) = iVar1;
    }
    if (0 < iVar1) {
      lVar6 = (long)iVar1 + 0x301;
      do {
        uVar4 = *(ulong *)(param_1 + lVar6 * 8);
        if (uVar4 == 0) {
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_aVcpu[i]","VirtualPC.cpp",
                        0x6a7,"DeinitAll");
          uVar4 = *(ulong *)(param_1 + lVar6 * 8);
        }
        QThread::wait(uVar4);
        plVar2 = *(long **)(param_1 + lVar6 * 8);
        uVar5 = extraout_RDX_00;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
          uVar5 = extraout_RDX_01;
        }
        *(undefined8 *)(param_1 + lVar6 * 8) = 0;
        lVar7 = lVar6 + -0x301;
        lVar6 = lVar6 + -1;
      } while (1 < lVar7);
      uVar4 = *(ulong *)(param_1 + 0x1ab0);
    }
  }
  if ((uVar4 & 0x100) != 0) {
    bVar8 = *(int *)(param_1 + 0x1948) == 5;
    (**(code **)(**(long **)(param_1 + 0x1950) + 0x30))
              (*(long **)(param_1 + 0x1950),bVar8,uVar5,bVar8);
  }
  FUN_1008e3970("","vm",0,"VM successfully stopped.");
  if ((*(uint *)(param_1 + 0x1948) | 2) != 6) {
    FUN_100107300();
    FUN_100106b10();
  }
  *(undefined2 *)(param_1 + 0x10e8) = 0;
  if (*(long **)(param_1 + 0x1910) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1910) + 0x20))();
    *(undefined8 *)(param_1 + 0x1910) = 0;
  }
  uVar4 = *(ulong *)(param_1 + 0x1ab0);
  if ((uVar4 & 0x80) != 0) {
    if (*(long *)(param_1 + 0x1158) != 0) {
      FUN_1000a3b00(param_1);
      *(undefined8 *)(param_1 + 0x1158) = 0;
    }
    if (*(long **)(param_1 + 0x1950) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1950) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1950) = 0;
    uVar4 = *(ulong *)(param_1 + 0x1ab0);
  }
  if (((uVar4 & 0x2000) != 0) && (*(int *)(param_1 + 0x1948) == 2)) {
    FUN_1000a9950(param_1,3);
  }
  *(undefined8 *)(param_1 + 0x1ab0) = 0;
  FUN_1000aa720(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a988b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000a988b:
  QMutex::unlock();
  return;
}


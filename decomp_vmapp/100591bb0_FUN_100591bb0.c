
void FUN_100591bb0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  
  uVar5 = FUN_10056c950(param_1[0xe]);
  uVar2 = *(uint *)(param_3 + 1);
  lVar6 = param_1[0xc];
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "!(dio->di_flags & PRL_DIO_WRITE)","Storage.cpp",0xb0f,"ReadAsync");
  }
  if (*(char *)((long)param_1 + 0x7c) != '\x01') {
    FUN_1008e3970("","vdisk",0,"ERROR: ReadAsync() - disk not opened");
    FUN_10070aef0(param_2,0xe);
    return;
  }
  if (*(long *)(param_1[0xe] + 0x1310) != 0) {
    plVar8 = (long *)(*(long *)(param_1[0xe] + 0x1310) + 0xf0);
    *plVar8 = *plVar8 + 1;
  }
  if (uVar2 == 0xffffffff) {
    FUN_10070b2d0(param_2 + 10,0,(int)param_2[10]);
    FUN_10070aed0(param_2);
    if (*(long *)(param_1[0xe] + 0x1318) == 0) {
      return;
    }
    plVar8 = (long *)(*(long *)(param_1[0xe] + 0x1318) + 0xf0);
    *plVar8 = *plVar8 + 1;
    return;
  }
  uVar10 = (int)lVar6 - 1;
  if (*(uint *)((long)param_1 + 0xac) != 0xffffffff) {
    uVar10 = *(uint *)((long)param_1 + 0xac);
  }
  QMutex::lock();
  plVar8 = (long *)0x0;
  if ((long *)param_1[0x20] != (long *)0x0) {
    plVar8 = (long *)param_1[0x20];
    plVar9 = param_1 + 0x20;
    do {
      while (plVar7 = plVar8, (ulong)plVar7[4] < uVar5 / *(uint *)(param_1 + 3)) {
        plVar1 = plVar7 + 1;
        plVar7 = plVar9;
        plVar8 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_100591ce0;
      }
      plVar8 = (long *)*plVar7;
      plVar9 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
LAB_100591ce0:
    plVar8 = (long *)0x0;
    if (((plVar7 != param_1 + 0x20) &&
        (plVar8 = (long *)0x0, (ulong)plVar7[4] <= uVar5 / *(uint *)(param_1 + 3))) &&
       (plVar8 = (long *)plVar7[5], plVar8 != (long *)0x0)) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
  }
  QMutex::unlock();
  if (((uVar2 != uVar10) && (plVar8 != (long *)0x0)) && (lVar6 = plVar8[2], lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x10d8) - 4U < 3) {
      iVar4 = *(int *)(*(long *)(lVar6 + 8) + 0x18);
      iVar3 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar2 = *(uint *)(*(long *)(plVar8[2] + 8) + 0x18);
      lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar10 = iVar3 * iVar4;
      uVar5 = (uVar5 % (ulong)uVar2) * lVar6;
      iVar4 = (int)uVar5;
      if (uVar10 < (uint)((int)param_2[10] + iVar4)) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "dio->di_vec.dv_size + off <= block_size","Storage.cpp",0xb61,"ReadAsync");
      }
      FUN_10070b090(param_2 + 10,(uVar5 & 0xffffffff) + *(long *)(plVar8[2] + 0x20),0,uVar10 - iVar4
                   );
      FUN_10070aed0(param_2);
      if (*(long *)(param_1[0xe] + 0x1300) != 0) {
        plVar9 = (long *)(*(long *)(param_1[0xe] + 0x1300) + 0xf0);
        *plVar9 = *plVar9 + 1;
      }
    }
    else if (*(int *)(lVar6 + 0x10d8) - 2U < 2) {
      param_2[4] = 0;
      if (*(long *)(lVar6 + 0x1120) == 0) {
        *(long **)(lVar6 + 0x1118) = param_2;
      }
      else {
        *(long **)(*(long *)(lVar6 + 0x1120) + 0x20) = param_2;
      }
      *(long **)(lVar6 + 0x1120) = param_2;
      if (*(long *)(param_1[0xe] + 0x12f0) != 0) {
        plVar9 = (long *)(*(long *)(param_1[0xe] + 0x12f0) + 0xf0);
        *plVar9 = *plVar9 + 1;
      }
    }
    else {
      FUN_1008e3970("","vdisk",0,"Error: unknown state %u");
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0xb6b,
                    "ReadAsync");
    }
    goto LAB_100592030;
  }
  if (*(uint *)(param_1 + 0x19) == uVar2) {
    iVar4 = FUN_1005920b0(param_2,param_1 + 0x22,uVar5,param_1);
    if (-1 < iVar4) {
      if (*(long *)(param_1[0xe] + 0x12f8) != 0) {
        plVar9 = (long *)(*(long *)(param_1[0xe] + 0x12f8) + 0xf0);
        *plVar9 = *plVar9 + 1;
      }
      goto LAB_100591e6e;
    }
    FUN_1008e3970("","vdisk",0,"Error: can\'t create track dio request: err=0x%x");
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 4;
    *(undefined4 *)(param_2 + 5) = 0xe;
    FUN_10070aed0(param_2);
  }
  else {
LAB_100591e6e:
    *param_2 = uVar5 % (ulong)*(uint *)(param_1 + 3) + *param_3;
    plVar9 = *(long **)(*(long *)(param_1[8] + ((ulong)uVar2 + param_1[0xb] >> 9) * 8) +
                       ((ulong)uVar2 + param_1[0xb] & 0x1ff) * 8);
    (**(code **)(*plVar9 + 0x80))(plVar9,param_2);
    if (*(long *)(param_1[0xe] + 0x1308) != 0) {
      plVar9 = (long *)(*(long *)(param_1[0xe] + 0x1308) + 0xf0);
      *plVar9 = *plVar9 + 1;
    }
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
LAB_100592030:
  LOCK();
  plVar9 = plVar8 + 1;
  lVar6 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar6 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100592058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x10))();
  return;
}


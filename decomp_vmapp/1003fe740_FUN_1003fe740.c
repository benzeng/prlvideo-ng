
void FUN_1003fe740(long param_1,long *param_2,ulong *param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *param_2 = param_1;
  param_2[2] = (long)FUN_1003fe670;
  param_2[1] = (long)FUN_1003fe240;
  param_2[5] = (long)param_2;
  param_2[7] = param_4;
  param_2[8] = 0x100000000;
  if (*(int *)(param_1 + 0x878) != 0) {
    plVar1 = param_2 + 0x11e;
    if ((long *)param_2[0x11e] != plVar1) {
      FUN_1008e3970("","HddUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","cd_list_empty(&req->list)"
                    ,"SFilterHddWorker.cpp",0x111,"ReqInit");
    }
    puVar2 = *(undefined8 **)(param_1 + 0x888);
    *(long **)(param_1 + 0x888) = plVar1;
    param_2[0x11e] = param_1 + 0x880;
    param_2[0x11f] = (long)puVar2;
    *puVar2 = plVar1;
  }
  if ((((*(int *)(param_1 + 0x850) != 0) && ((int)param_3[2] == 1)) &&
      ((*(byte *)(param_4 + 10) & 1) != 0)) &&
     (((*param_3 & 0xfff) != 0 &&
      (lVar3 = (ulong)(*(int *)(param_4 + 0x34) - 1) * 0x10,
      (*(ushort *)(param_4 + 0x38 + lVar3) & 0xfff) == 0)))) {
    *param_3 = *param_3 + 0xfff & 0xfffffffffffff000;
    *(ulong *)(param_4 + 0x40 + lVar3) =
         *(long *)(param_4 + 0x40 + lVar3) + 0xfffU & 0xfffffffffffff000;
    plVar1 = (long *)(*(long *)(param_1 + 0x868) + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  if ((*(byte *)(param_4 + 10) & 2) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x870) + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  *(uint *)(param_2 + 6) = (uint)((int)param_3[2] == 1);
  param_2[3] = *param_3;
  param_2[4] = *(long *)(*(long *)(param_1 + 0x840) + 0x48) * param_3[1];
  return;
}


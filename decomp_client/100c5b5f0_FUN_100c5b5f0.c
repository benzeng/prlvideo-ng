
int FUN_100c5b5f0(long param_1,void *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_34;
  
  local_34 = 0;
  if ((((param_2 != (void *)0x0) && (0 < param_3)) &&
      (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0)) &&
     (local_34 = 0, *(long *)(param_1 + 0x38) != 0)) {
    FUN_100c58810(param_1,0xf);
    iVar5 = *(int *)(lVar1 + 0x20);
    iVar2 = *(int *)(lVar1 + 0x24);
    iVar3 = iVar2 + iVar5;
    iVar4 = *(int *)(lVar1 + 4) - iVar3;
    local_34 = 0;
    if (iVar4 < param_3) {
      do {
        if (iVar5 != 0) {
          if (0 < iVar4) {
            _memcpy((void *)((long)iVar3 + *(long *)(lVar1 + 0x18)),param_2,(long)iVar4);
            param_2 = (void *)((long)param_2 + (long)iVar4);
            param_3 = param_3 - iVar4;
            local_34 = local_34 + iVar4;
            iVar5 = iVar4 + *(int *)(lVar1 + 0x20);
            *(int *)(lVar1 + 0x20) = iVar5;
            iVar2 = *(int *)(lVar1 + 0x24);
          }
          do {
            iVar5 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),
                                  (long)iVar2 + *(long *)(lVar1 + 0x18),iVar5);
            if (iVar5 < 1) {
              FUN_100c59780(param_1);
              if (-1 < iVar5) {
                return local_34;
              }
              goto LAB_100c5b780;
            }
            iVar2 = *(int *)(lVar1 + 0x24) + iVar5;
            *(int *)(lVar1 + 0x24) = iVar2;
            iVar5 = *(int *)(lVar1 + 0x20) - iVar5;
            *(int *)(lVar1 + 0x20) = iVar5;
          } while (iVar5 != 0);
        }
        *(undefined4 *)(lVar1 + 0x24) = 0;
        while (*(int *)(lVar1 + 4) <= param_3) {
          iVar5 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
          if (iVar5 < 1) {
            FUN_100c59780(param_1);
            if (-1 < iVar5) {
              return local_34;
            }
LAB_100c5b780:
            if (0 < local_34) {
              return local_34;
            }
            return iVar5;
          }
          local_34 = local_34 + iVar5;
          param_2 = (void *)((long)param_2 + (long)iVar5);
          param_3 = param_3 - iVar5;
          if (param_3 == 0) {
            return local_34;
          }
        }
        iVar5 = *(int *)(lVar1 + 0x20);
        iVar2 = *(int *)(lVar1 + 0x24);
        iVar3 = iVar2 + iVar5;
        iVar4 = *(int *)(lVar1 + 4) - iVar3;
      } while (iVar4 < param_3);
    }
    _memcpy((void *)((long)iVar3 + *(long *)(lVar1 + 0x18)),param_2,(long)param_3);
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + param_3;
    local_34 = param_3 + local_34;
  }
  return local_34;
}



undefined1 FUN_10052acd0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  Data *pDVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int local_44;
  Data *local_40;
  undefined1 local_32;
  
  lVar8 = *(long *)(param_1 + 8);
  iVar2 = *(int *)(lVar8 + 4);
  lVar9 = *(long *)(param_2 + 8);
  if (iVar2 == *(int *)(lVar9 + 4)) {
    local_40 = (Data *)PTR_shared_null_100ba2188;
    if (iVar2 < 1) {
      uVar6 = 1;
    }
    else {
      local_44 = 0;
      lVar10 = 0;
      uVar6 = 0;
      if (0 < iVar2) {
LAB_10052ad24:
        local_44 = 0;
        do {
          lVar5 = lVar8 + *(long *)(lVar8 + 0x10);
          lVar4 = lVar10 * 0x20;
          lVar1 = lVar9 + *(long *)(lVar9 + 0x10);
          lVar7 = (long)local_44 * 0x20;
          if ((((*(int *)(lVar4 + 0x18 + lVar5) == *(int *)(lVar7 + 0x18 + lVar1)) &&
               (*(int *)(lVar5 + 0x1c + lVar4) == *(int *)(lVar1 + 0x1c + lVar7))) &&
              (*(short *)(lVar5 + 4 + lVar4) == *(short *)(lVar1 + 4 + lVar7))) &&
             (*(short *)(lVar5 + 6 + lVar4) == *(short *)(lVar1 + 6 + lVar7))) {
            iVar2 = *(int *)(local_40 + 8);
            if (iVar2 == *(int *)(local_40 + 0xc)) goto LAB_10052add1;
            pDVar3 = local_40 + (long)iVar2 * 8 + 0x10;
            lVar5 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar2 * -8;
            while (*(int *)pDVar3 != local_44) {
              pDVar3 = pDVar3 + 8;
              lVar5 = lVar5 + -8;
              if (lVar5 == 0) goto LAB_10052add1;
            }
          }
          local_44 = local_44 + 1;
          if (*(int *)(lVar9 + 4) <= local_44) {
            uVar6 = 0;
            break;
          }
        } while( true );
      }
    }
LAB_10052ae16:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return uVar6;
        }
        local_32 = 0;
      }
      QListData::dispose(local_40);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
LAB_10052add1:
  FUN_10077ced0(&local_40,&local_44);
  lVar10 = lVar10 + 1;
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(lVar8 + 4) <= lVar10) {
    uVar6 = 1;
    goto LAB_10052ae16;
  }
  lVar9 = *(long *)(param_2 + 8);
  uVar6 = 0;
  local_44 = 0;
  if (*(int *)(lVar9 + 4) < 1) goto LAB_10052ae16;
  goto LAB_10052ad24;
}


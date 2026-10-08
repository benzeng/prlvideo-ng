
void FUN_1006a9720(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  undefined4 local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_1000722f0(&local_58);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      local_5c = **(undefined4 **)local_50;
      local_80 = (Data *)*param_3;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 == 0) {
          QListData::detach((int)&local_80);
          iVar1 = *(int *)(local_80 + 8);
          if (iVar1 != *(int *)(local_80 + 0xc)) {
            puVar5 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
            pDVar7 = local_80 + (long)iVar1 * 8 + 0x10;
            lVar3 = (long)*(int *)(local_80 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              piVar2 = (int *)*puVar5;
              *(int **)pDVar7 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              pDVar7 = pDVar7 + 8;
              puVar5 = puVar5 + 1;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
        }
        else {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
      }
      pDVar7 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
      local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
      local_78 = pDVar7;
      if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
        do {
          local_68 = 1;
          local_78 = pDVar7;
          uVar4 = FUN_1006a9e50(param_1 + 0x28,&local_5c);
          puVar5 = (undefined8 *)FUN_1006aa080(uVar4,pDVar7);
          piVar2 = (int *)*param_4;
          piVar6 = (int *)*puVar5;
          if (piVar6 != piVar2) {
            uVar4 = param_4[1];
            if (piVar2 != (int *)0x0) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
              piVar6 = (int *)*puVar5;
            }
            if (piVar6 != (int *)0x0) {
              LOCK();
              *piVar6 = *piVar6 + -1;
              local_31 = *piVar6 != 0;
              UNLOCK();
              if ((!(bool)local_31) && ((void *)*puVar5 != (void *)0x0)) {
                operator_delete((void *)*puVar5);
              }
            }
            *puVar5 = piVar2;
            puVar5[1] = uVar4;
          }
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_4 + 3);
          puVar5[2] = param_4[2];
          QVariant::operator=((QVariant *)(puVar5 + 4),(QVariant *)(param_4 + 4));
          *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_4 + 6);
          pDVar7 = local_78 + 8;
          local_78 = pDVar7;
        } while (pDVar7 != local_70);
      }
      pDVar7 = local_80;
      local_68 = 1;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006a99af;
        }
        iVar1 = *(int *)(local_80 + 0xc);
        if (iVar1 != *(int *)(local_80 + 8)) {
          lVar3 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
          pDVar9 = local_80 + (long)iVar1 * 8 + 8;
          do {
            pQVar8 = *(QArrayData **)pDVar9;
            if (*(int *)pQVar8 == 0) {
LAB_1006a9980:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar9;
                goto LAB_1006a9980;
              }
            }
            pDVar9 = pDVar9 + -8;
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0);
        }
        QListData::dispose(pDVar7);
      }
LAB_1006a99af:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_58);
  }
  return;
}


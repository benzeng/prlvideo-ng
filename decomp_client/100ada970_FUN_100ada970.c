
char FUN_100ada970(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  Data *pDVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  Data *local_40;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                  "CDragDropGUI initiated Drag operation. m_dragSource = 0x%08X",
                  *(undefined4 *)(param_1 + 0x58));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  local_40 = (Data *)*param_2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      iVar2 = *(int *)(local_40 + 8);
      if (iVar2 != *(int *)(local_40 + 0xc)) {
        puVar7 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        pDVar8 = local_40 + (long)iVar2 * 8 + 0x10;
        lVar6 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar4 = (int *)*puVar7;
          *(int **)pDVar8 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_35 = *piVar4 != 0;
            UNLOCK();
          }
          pDVar8 = pDVar8 + 8;
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_36 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  cVar5 = FUN_100ad8a40(uVar3,uVar1,&local_40);
  pDVar8 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100adaae1;
      local_34 = 0;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = local_40 + (long)iVar2 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_100adaac0:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_33 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_33) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_100adaac0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100adaae1:
  if (cVar5 != '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
  }
  return cVar5;
}


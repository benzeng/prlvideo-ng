
void FUN_10043af10(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  QArrayData *pQVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar8;
  ulong uVar9;
  QArrayData *pQVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_31;
  ulong uVar7;
  
  lVar1 = *param_2;
  if ((*(long *)(lVar1 + 0x10) != 0) && (lVar5 = *(long *)(lVar1 + 0x20), lVar5 != lVar1 + 8)) {
    do {
      local_38 = *(undefined4 *)(lVar5 + 0x18);
      lVar1 = *(long *)(lVar5 + 0x20);
      puVar3 = (undefined4 *)FUN_10043b670(param_1 + 8,&local_38);
      ___bzero(puVar3,0x508);
      pQVar4 = *(QArrayData **)(lVar5 + 0x28);
      if (*(int *)pQVar4 == 0) {
        if ((int)*(uint *)(pQVar4 + 8) < 0) {
          pQVar4 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
          if (pQVar4 == (QArrayData *)0x0) {
            qBadAlloc();
          }
          pQVar4[0xb] = (QArrayData)((byte)pQVar4[0xb] | 0x80);
        }
        else {
          pQVar4 = (QArrayData *)QArrayData::allocate(8,8,(long)*(int *)(pQVar4 + 4),0);
          if (pQVar4 == (QArrayData *)0x0) {
            qBadAlloc();
            *(undefined **)pQVar4 = PTR_shared_null_100ba2180;
            *(undefined **)(pQVar4 + 8) = PTR_shared_null_100ba20d8;
            ___bzero(pQVar4 + 0x10,0x148);
            *(undefined4 *)(pQVar4 + 0x18) = 10;
            *(undefined4 *)(pQVar4 + 0x1c) = 5;
            *(undefined8 *)(pQVar4 + 0x38) = 0;
            *(undefined8 *)(pQVar4 + 0x30) = 0;
            *(undefined8 *)(pQVar4 + 0x28) = 0;
            *(undefined8 *)(pQVar4 + 0x20) = 0;
            *(undefined4 *)(pQVar4 + 0x10) = 1;
            *(undefined4 *)(pQVar4 + 0x14) = 0;
            return;
          }
        }
        if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) != 0) {
          lVar2 = *(long *)(lVar5 + 0x28);
          _memcpy(pQVar4 + *(long *)(pQVar4 + 0x10),(void *)(*(long *)(lVar2 + 0x10) + lVar2),
                  (long)*(int *)(lVar2 + 4) << 3);
          *(undefined4 *)(pQVar4 + 4) = *(undefined4 *)(*(long *)(lVar5 + 0x28) + 4);
        }
      }
      else if (*(int *)pQVar4 != -1) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        pQVar4 = *(QArrayData **)(lVar5 + 0x28);
      }
      if (pQVar4 + *(long *)(pQVar4 + 0x10) ==
          pQVar4 + (long)*(int *)(pQVar4 + 4) * 8 + *(long *)(pQVar4 + 0x10)) {
        uVar6 = 0xffffffff;
        uVar8 = 0;
      }
      else {
        puVar11 = puVar3 + 2;
        pQVar10 = pQVar4 + *(long *)(pQVar4 + 0x10) + 8;
        uVar8 = 0;
        uVar9 = 0xffffffff;
        do {
          lVar5 = *(long *)(pQVar10 + -8);
          FUN_10043b7d0(lVar5,puVar11);
          uVar7 = uVar8 & 0xffffffff;
          if (*(int *)(lVar5 + 0x10) != *(int *)(lVar1 + 0x10)) {
            uVar7 = uVar9;
          }
          uVar6 = (undefined4)uVar7;
          uVar8 = uVar8 + 1;
          if (0x1f < uVar8) break;
          puVar11 = puVar11 + 10;
          bVar12 = pQVar10 != pQVar4 + (long)*(int *)(pQVar4 + 4) * 8 + *(long *)(pQVar4 + 0x10);
          pQVar10 = pQVar10 + 8;
          uVar9 = uVar7;
        } while (bVar12);
      }
      *puVar3 = (int)uVar8;
      puVar3[1] = uVar6;
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_33 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_33) goto LAB_10043b118;
        }
        QArrayData::deallocate(pQVar4,8,8);
      }
LAB_10043b118:
      lVar5 = QMapNodeBase::nextNode();
    } while (lVar5 != *param_2 + 8);
  }
  return;
}


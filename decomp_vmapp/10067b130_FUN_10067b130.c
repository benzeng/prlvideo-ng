
int FUN_10067b130(long param_1,uint param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  QArrayData *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  uVar10 = (ulong)param_2;
  if (*(long *)(param_1 + 8) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar11 = (uint *)*puVar5;
      if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
        QByteArray::reallocData(puVar5,puVar11[1] + 1,puVar11[2] >> 0x1f);
        puVar11 = (uint *)*puVar5;
      }
      lVar8 = *(long *)(puVar11 + 4);
      if ((long)puVar11 + lVar8 != 0) {
        lVar1 = lVar8 + uVar10;
        if (*(short *)((long)puVar11 + lVar1) != 0x6b6e) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.43:");
          return 0x8158009;
        }
        iVar6 = FUN_10067ae70(param_1,(long)puVar11 + lVar1);
        if (iVar6 != -1) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.44:");
          return 0x8158013;
        }
        iVar9 = *(int *)(*param_3 + 4) + 0x14;
        iVar6 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),iVar9,&local_38);
        if (iVar6 != 0x8000000) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.45:\t%x;\t%d",iVar9,iVar6);
          return iVar6;
        }
        uVar4 = *(int *)((long)puVar11 + lVar1 + 0x24) * 4 + 4;
        iVar6 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),(ulong)uVar4,&local_3c);
        if (iVar6 != 0x8000000) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.46:\t%x;\t%d",uVar4,iVar6);
          FUN_10067ce20(*(undefined8 *)(param_1 + 8),local_38);
          return iVar6;
        }
        lVar2 = uVar10 + 0x24 + lVar8;
        lVar3 = uVar10 + 0x28 + lVar8;
        _memcpy((void *)((ulong)(local_3c + 4) + lVar8 + (long)puVar11),
                (void *)((ulong)(*(int *)((long)puVar11 + lVar1 + 0x28) + 0x1004) + lVar8 +
                        (long)puVar11),(ulong)uVar4);
        *(int *)((long)puVar11 +
                (ulong)(uint)(local_3c + 4 + *(int *)((long)puVar11 + lVar2) * 4) + lVar8) =
             local_38 + -0x1000;
        if (*(int *)((long)puVar11 + lVar2) != 0) {
          FUN_10067ce20(*(undefined8 *)(param_1 + 8),*(int *)((long)puVar11 + lVar3) + 0x1000);
        }
        lVar8 = (ulong)(local_38 + 4) + lVar8;
        *(undefined2 *)((long)puVar11 + lVar8) = 0x6b76;
        iVar6 = *(int *)(*param_3 + 4);
        *(short *)((long)puVar11 + lVar8 + 2) = (short)iVar6;
        *(uint *)((long)puVar11 + lVar8 + 0xc) = param_4;
        *(undefined2 *)((long)puVar11 + lVar8 + 0x10) = 1;
        *(uint *)((long)puVar11 + lVar8 + 4) = (uint)((param_4 & 0xfffffffe) == 4) * 3 + -0x7fffffff
        ;
        if (iVar6 != 0) {
          QString::toLatin1();
          if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
          }
          _strncpy((char *)((long)puVar11 + lVar8 + 0x14),
                   (char *)(local_48 + *(long *)(local_48 + 0x10)),(long)*(int *)(*param_3 + 4));
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              UNLOCK();
              if (*(int *)local_48 != 0) goto LAB_10067b487;
              local_31 = 0;
            }
            QArrayData::deallocate(local_48,1,8);
          }
        }
LAB_10067b487:
        *(int *)((long)puVar11 + lVar2) = *(int *)((long)puVar11 + lVar2) + 1;
        *(int *)((long)puVar11 + lVar3) = local_3c + -0x1000;
        uVar7 = *(int *)(*param_3 + 4) * 2;
        uVar4 = *(uint *)((long)puVar11 + lVar1 + 0x3c);
        if (uVar7 <= uVar4) {
          uVar7 = uVar4;
        }
        *(uint *)((long)puVar11 + lVar1 + 0x3c) = uVar7;
        uVar4 = *(uint *)((long)puVar11 + lVar1 + 0x40);
        uVar7 = 4;
        if (3 < uVar4) {
          uVar7 = uVar4;
        }
        *(uint *)((long)puVar11 + lVar1 + 0x40) = uVar7;
        return 0x8000000;
      }
    }
  }
  FUN_1008e3970("","WinRegistry",0,"OA00002.42:");
  return 0x8158002;
}


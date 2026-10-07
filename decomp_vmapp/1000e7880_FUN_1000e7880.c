
void FUN_1000e7880(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  uint *puVar11;
  QArrayData *pQVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *(long *)(DAT_1011c3698 + 0x1938);
  local_38 = lVar3;
  if (3 < *(int *)(lVar4 + 0x3d948) - 0x10U) {
    FUN_1008e3970("","vm",0,"Unsupported operation type from EFI 0x%x");
    *(undefined4 *)(lVar4 + 0x3db60) = 0x80000003;
    goto LAB_1000e7d97;
  }
  lVar1 = lVar4 + 0x3d948;
  switch(*(int *)(lVar4 + 0x3d948)) {
  case 0x10:
    puVar8 = (undefined8 *)FUN_1000e8150(lVar1);
    if (puVar8 == &DAT_1011c3780) {
      *(undefined4 *)(lVar4 + 0x3db64) = 0;
      *(undefined4 *)(lVar4 + 0x3db60) = 0x8000000e;
    }
    else {
      puVar11 = (uint *)puVar8[5];
      uVar2 = puVar11[1];
      uVar7 = 0x80000005;
      if (uVar2 <= *(uint *)(lVar4 + 0x3db64)) {
        if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
          QByteArray::reallocData(puVar8 + 5,uVar2 + 1,puVar11[2] >> 0x1f);
          puVar11 = (uint *)puVar8[5];
        }
        _memcpy((void *)(lVar4 + 0x3db68),(void *)((long)puVar11 + *(long *)(puVar11 + 4)),
                (ulong)uVar2);
        *(uint *)(lVar4 + 0x3db5c) = (uint)*(byte *)(puVar8 + 6);
        uVar7 = 0;
      }
      *(uint *)(lVar4 + 0x3db64) = uVar2;
      *(undefined4 *)(lVar4 + 0x3db60) = uVar7;
    }
    break;
  case 0x11:
    puVar8 = (undefined8 *)FUN_1000e8150(lVar1);
    if (puVar8 == &DAT_1011c3780) {
      if (*(int *)(lVar4 + 0x3db64) == 0) {
        FUN_1008e3970("","vm",0,"Trying to delete nonexisting variable");
        *(undefined4 *)(lVar4 + 0x3db60) = 0x8000000e;
        break;
      }
LAB_1000e7ac3:
      QString::fromUtf16((ushort *)&local_70,(int)lVar4 + 0x3d94c);
      QString::normalized(&local_68,&local_70,1,0);
      FUN_1007d6cd0(local_48,lVar4 + 0x3db4c);
      uVar2 = *(uint *)(lVar4 + 0x3db5c);
      QByteArray::QByteArray
                ((QByteArray *)&local_78,(char *)(lVar4 + 0x3db68),*(int *)(lVar4 + 0x3db64));
      cVar6 = FUN_1000e2b60(&local_68,local_48,uVar2 & 0xff,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_59 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1000e7b62;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_1000e7b62:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_59 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1000e7b92;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1000e7b92:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_59 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1000e7bc2;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1000e7bc2:
      uVar7 = 0;
      if (cVar6 == '\0') {
        FUN_1008e3970("","vm",0,"Error allocating memory for new data at SetVariable");
        uVar7 = 0x80000007;
      }
    }
    else {
      if ((*(byte *)(puVar8 + 6) & 1) != 0) {
        DAT_1011b6d28 =
             DAT_1011b6d28 + ((*(int *)(puVar8[4] + 4) * -2 + -0x16) - *(int *)(puVar8[5] + 4));
      }
      FUN_1000e85b0(&DAT_1011c3778,puVar8);
      uVar7 = 0;
      if (*(int *)(lVar4 + 0x3db64) != 0) goto LAB_1000e7ac3;
    }
    *(undefined4 *)(lVar4 + 0x3db60) = uVar7;
    break;
  case 0x12:
    puVar8 = DAT_1011c3778;
    if (*(short *)(lVar4 + 0x3d94c) == 0) {
LAB_1000e7bfe:
      uVar7 = 0x8000000e;
      if (puVar8 != &DAT_1011c3780) {
        local_80 = (QArrayData *)puVar8[4];
        if (1 < *(int *)local_80 + 1U) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_59 = *(int *)local_80 != 0;
          UNLOCK();
        }
        QString::right((int)&local_88);
        FUN_1007d6920(local_58,&local_88);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_59 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_1000e7c7b;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1000e7c7b:
        QString::chop((int)&local_80);
        auVar14 = FUN_1007d6c90(local_58);
        *(undefined1 (*) [16])(lVar4 + 0x3db4c) = auVar14;
        uVar2 = *(int *)(local_80 + 4) * 2 + 2;
        if (*(uint *)(lVar4 + 0x3db64) < uVar2) {
          FUN_1008e3970("","vm",0,"Buffer is too small [need %u, got %u]",uVar2);
          *(uint *)(lVar4 + 0x3db64) = uVar2;
          uVar7 = 0x80000005;
          pQVar12 = local_80;
        }
        else {
          *(uint *)(lVar4 + 0x3db64) = uVar2;
          pvVar10 = (void *)QString::utf16();
          pQVar12 = local_80;
          _memcpy((void *)(lVar4 + 0x3db68),pvVar10,(long)*(int *)(local_80 + 4) * 2);
          *(undefined1 *)(lVar4 + 0x3db68 + (long)*(int *)(pQVar12 + 4) * 2) = 0;
          *(undefined1 *)(lVar4 + 0x3db69 + (long)*(int *)(pQVar12 + 4) * 2) = 0;
          uVar7 = 0;
        }
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_59 = *(int *)pQVar12 != 0;
            UNLOCK();
            pQVar12 = local_80;
            if ((bool)local_59) goto LAB_1000e7d90;
          }
          QArrayData::deallocate(pQVar12,2,8);
          *(undefined4 *)(lVar4 + 0x3db60) = uVar7;
          break;
        }
      }
    }
    else {
      puVar9 = (undefined8 *)FUN_1000e8150(lVar1);
      if (puVar9 != &DAT_1011c3780) {
        puVar5 = (undefined8 *)puVar9[1];
        if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar9[2];
            bVar13 = (undefined8 *)*puVar8 != puVar9;
            puVar9 = puVar8;
          } while (bVar13);
        }
        else {
          do {
            puVar8 = puVar5;
            puVar5 = (undefined8 *)*puVar8;
          } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
        }
        goto LAB_1000e7bfe;
      }
      FUN_1008e3970("","vm",0,"EFIVar::GetNextName(): called with nonpresent previous variable!");
      uVar7 = 0x80000002;
    }
LAB_1000e7d90:
    *(undefined4 *)(lVar4 + 0x3db60) = uVar7;
    break;
  case 0x13:
    uVar7 = 0x80000002;
    if (*(int *)(lVar4 + 0x3db64) == 0x18) {
      *(undefined8 *)(lVar4 + 0x3db68) = 0xdffc;
      *(ulong *)(lVar4 + 0x3db70) = 0xdffc - (ulong)DAT_1011b6d28;
      *(undefined8 *)(lVar4 + 0x3db78) = 0x1000;
      uVar7 = 0;
    }
    *(undefined4 *)(lVar4 + 0x3db60) = uVar7;
  }
LAB_1000e7d97:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


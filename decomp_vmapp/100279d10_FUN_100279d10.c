
undefined1 FUN_100279d10(byte *param_1,QString *param_2)

{
  bool bVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 uVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_88 = (uint *)PTR_shared_null_100ba2188;
  iVar4 = FUN_1006b3450(&local_88,0,0);
  if (-1 < iVar4) {
    if (*local_88 < 2) {
      puVar9 = local_88 + (long)(int)local_88[2] * 2 + 4;
    }
    else {
      FUN_10027ab40(&local_88,local_88[1]);
      puVar9 = local_88 + (long)(int)local_88[2] * 2 + 4;
      if (1 < *local_88) {
        FUN_10027ab40(&local_88,local_88[1]);
      }
    }
    if (local_88 + (long)(int)local_88[3] * 2 + 4 != puVar9) {
      do {
        cVar3 = operator==((QString *)(*(long *)puVar9 + 8),param_2);
        puVar11 = puVar9 + 2;
        if (((cVar3 != '\0') && (local_88 + (long)(int)local_88[3] * 2 + 4 != puVar9)) &&
           (local_80 = puVar9, FUN_10027ac50(&local_78,&local_88,&local_80), puVar11 = local_78,
           1 < *local_88)) {
          FUN_10027ab40(&local_88,local_88[1]);
        }
        puVar9 = puVar11;
      } while (local_88 + (long)(int)local_88[3] * 2 + 4 != puVar11);
    }
    uVar8 = 1;
    iVar4 = 0;
    do {
      FUN_10027a630(&local_58,&local_88);
      lVar7 = (long)*(int *)(local_58 + 8);
      local_50 = local_58 + 0x10 + lVar7 * 8;
      iVar5 = *(int *)(local_58 + 0xc);
      local_48 = local_58 + 0x10 + (long)iVar5 * 8;
      if (*(int *)(local_58 + 8) != iVar5) {
        lVar12 = (long)iVar5 * 8 + lVar7 * -8;
        lVar7 = local_58 + 0x18 + lVar7 * 8;
        do {
          lVar10 = lVar7;
          local_40 = 1;
          iVar5 = _memcmp((void *)(*(long *)(lVar10 + -8) + 0x2a),param_1,6);
          if (iVar5 == 0) {
            FUN_1006b58c0(&local_60,param_1);
            if (0 < DAT_1011b55f8) {
              QString::toUtf8();
              pQVar2 = local_68;
              lVar7 = *(long *)(local_68 + 0x10);
              QString::toUtf8();
              FUN_1008e3970("","LocalDevices",1,"addr %s conflicts with interface %s",pQVar2 + lVar7
                            ,local_70 + *(long *)(local_70 + 0x10));
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10027a01c;
                }
                QArrayData::deallocate(local_70,1,8);
              }
LAB_10027a01c:
              if (*(int *)local_68 != -1) {
                if (*(int *)local_68 != 0) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + -1;
                  local_31 = *(int *)local_68 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10027a04c;
                }
                QArrayData::deallocate(local_68,1,8);
              }
            }
LAB_10027a04c:
            bVar1 = true;
            if (*(int *)local_60 == -1) goto LAB_100279f05;
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100279f05;
            }
            QArrayData::deallocate(local_60,2,8);
            goto LAB_100279f05;
          }
          lVar12 = lVar12 + -8;
          lVar7 = lVar10 + 8;
          local_50 = lVar10;
        } while (lVar12 != 0);
      }
      local_40 = 1;
      bVar1 = false;
LAB_100279f05:
      FUN_10027a3f0(&local_58);
      iVar5 = iVar4;
      if ((!bVar1) || (iVar5 = iVar4 + 1, 0x13 < iVar4)) goto LAB_10027a096;
      iVar4 = _rand();
      iVar6 = FUN_1007d8850();
      _srand(iVar6 + iVar4);
      iVar4 = _rand();
      *param_1 = (byte)iVar4;
      iVar4 = _rand();
      param_1[1] = (byte)iVar4;
      iVar4 = _rand();
      param_1[2] = (byte)iVar4;
      iVar4 = _rand();
      param_1[3] = (byte)iVar4;
      iVar4 = _rand();
      param_1[4] = (byte)iVar4;
      iVar4 = _rand();
      param_1[5] = (byte)iVar4;
      *param_1 = *param_1 & 0xfc | 2;
      uVar8 = 0;
      iVar4 = iVar5;
    } while( true );
  }
  uVar8 = 0;
  FUN_1008e3970("","LocalDevices",0,"makeBindableAdapterList failed with 0x%x");
LAB_10027a0c2:
  FUN_10027a3f0(&local_88);
  return uVar8;
LAB_10027a096:
  if (0x13 < iVar5) {
    uVar8 = 0;
    FUN_1008e3970("","LocalDevices",0,"Failed to gen vme hwaddr");
  }
  goto LAB_10027a0c2;
}


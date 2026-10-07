
undefined8 * FUN_1000e9fd0(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  bool bVar2;
  QArrayData *pQVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  QArrayData *pQVar8;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  ulong local_40;
  undefined1 local_31;
  
  lVar5 = FUN_1000ea580(param_2);
  if (lVar5 == 0) {
    *param_1 = PTR_shared_null_100ba20d0;
    return param_1;
  }
  plVar6 = (long *)FUN_1000ea7d0(lVar5);
  if (plVar6 == (long *)0x0) {
LAB_1000ea16f:
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",3,"Using embedded binary \"%s\" (%u bytes)",
                    *(undefined8 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x10));
    }
    QByteArray::fromRawData((char *)&local_60,(int)*(undefined8 *)(lVar5 + 8));
  }
  else {
    (**(code **)(*plVar6 + 0xe0))(&local_50,plVar6);
    QIODevice::readAll();
    (**(code **)(*plVar6 + 0x20))(plVar6);
    if (*(int *)(local_60 + 4) == 0) {
      bVar2 = false;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          bVar2 = false;
          if ((bool)local_31) goto LAB_1000ea13b;
        }
        QArrayData::deallocate(local_60,1,8);
        bVar2 = false;
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","vm",0,"Loaded \"%s\" (%u bytes)",local_58 + *(long *)(local_58 + 0x10),
                    *(int *)(local_60 + 4));
      bVar2 = true;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ea13b;
        }
        QArrayData::deallocate(local_58,1,8);
      }
    }
LAB_1000ea13b:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ea16b;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1000ea16b:
    if (!bVar2) goto LAB_1000ea16f;
  }
  pQVar3 = local_60;
  pQVar8 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar4 = *(int *)(local_60 + 4);
  if ((long)iVar4 < 0xc) {
    pQVar8 = local_60;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  else {
    lVar1 = *(long *)(local_60 + 0x10);
    if ((((local_60[lVar1] == (QArrayData)0xba) && (local_60[lVar1 + 1] == (QArrayData)0xba)) &&
        (local_60[lVar1 + 2] == (QArrayData)0xed)) && (local_60[lVar1 + 3] == (QArrayData)0xd)) {
      uVar7 = (ulong)CONCAT13(local_60[lVar1 + 7],
                              CONCAT12(local_60[lVar1 + 6],
                                       CONCAT11(local_60[lVar1 + 5],local_60[lVar1 + 4])));
      local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
      local_40 = uVar7;
      QByteArray::resize((int)&local_48);
      if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
      }
      iVar4 = _uncompress((Bytef *)(local_48 + *(long *)(local_48 + 0x10)),&local_40,
                          (Bytef *)(pQVar3 + lVar1 + 0xc),(long)iVar4 - 0xc);
      if (iVar4 == 0) {
        if (local_40 == uVar7) {
          pQVar8 = local_48;
          if (1 < *(uint *)local_48 + 1) {
            LOCK();
            *(uint *)local_48 = *(uint *)local_48 + 1;
            local_31 = *(uint *)local_48 != 0;
            UNLOCK();
          }
        }
        else {
          FUN_1008e3970("","vm",0,"Error: decompressed data size mismatch (%lu != %u)");
        }
      }
      else {
        FUN_1008e3970("","vm",0,"Error: decompression failed: %u");
      }
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ea2fa;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
    else {
      pQVar8 = local_60;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
  }
LAB_1000ea2fa:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ea32a;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000ea32a:
  if (*(int *)(pQVar8 + 4) == 0) {
    FUN_1008e3970("","vm",0,"Error: failed to load \"%s\"",*(undefined8 *)(lVar5 + 0x18));
  }
  *param_1 = pQVar8;
  iVar4 = *(int *)pQVar8;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
    iVar4 = *(int *)pQVar8;
  }
  if (iVar4 != -1) {
    if (iVar4 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar8,1,8);
  }
  return param_1;
}


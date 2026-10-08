
undefined8 * FUN_100b8e9b0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  ulong uVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  ushort local_38 [2];
  undefined1 uStack_34;
  undefined1 local_33;
  undefined1 local_31;
  
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x755,"GetShortProductId");
  }
  puVar1 = PTR_shared_null_1021e1288;
  *param_1 = PTR_shared_null_1021e1288;
  iVar2 = FUN_100b8df90(param_2,local_38);
  if (iVar2 != 0) {
    uVar5 = 0;
    do {
      iVar2 = (int)param_1;
      if (uVar5 == 4) {
        local_48 = (QArrayData *)puVar1;
        uVar3 = QString::setNum((longlong)&local_48,
                                (uint)((ushort)(s_NADVORETRAV_101cdc1e4._4_2_ ^
                                               CONCAT11(uStack_34,local_33)) >> 4));
        QString::rightJustified(&local_40,uVar3,4,0x30,0);
        QString::insert(iVar2,(QChar *)0x0,(int)*(undefined8 *)(local_40 + 0x10) + (int)local_40);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b8ead9;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_100b8ead9:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b8ebd0;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
      else {
        local_58 = (QArrayData *)puVar1;
        uVar3 = QString::setNum((longlong)&local_58,
                                (uint)(*(ushort *)((long)local_38 + uVar5) ^
                                      *(ushort *)("NADVORETRAV" + uVar5)));
        QString::rightJustified(&local_50,uVar3,5,0x30,0);
        QString::insert(iVar2,(QChar *)0x0,(int)*(undefined8 *)(local_50 + 0x10) + (int)local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b8eba0;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100b8eba0:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b8ebd0;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
LAB_100b8ebd0:
      if (uVar5 + 1 < 5) {
        pQVar4 = (QArrayData *)QString::fromAscii_helper("-",1);
        QString::insert(iVar2,(QChar *)0x0,(int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b8ec30;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
      }
LAB_100b8ec30:
      uVar5 = uVar5 + 2;
    } while (uVar5 < 6);
  }
  return param_1;
}


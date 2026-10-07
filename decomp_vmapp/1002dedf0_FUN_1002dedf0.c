
undefined8 FUN_1002dedf0(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *local_38;
  
  uVar12 = param_1 + 0x20;
  local_38 = param_2;
  if ((uVar12 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar12 = uVar12 | 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = *param_2;
  lVar3 = *(long *)(lVar2 + 0x40 + (ulong)(uVar1 & 0xff) * 8);
  uVar11 = (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4);
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x18) + uVar10 * 0x10);
      if (((lVar9 != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 8 + uVar10 * 0x10), lVar4 != 0)) &&
         (uVar5 = (ulong)*(byte *)(lVar9 + 4), uVar5 != 0)) {
        plVar6 = (long *)(lVar4 + 8);
        uVar7 = 0;
        do {
          if (*(byte *)(*plVar6 + 2) == uVar1) {
            lVar9 = lVar4 + uVar7 * 0x28;
            if ((lVar3 == 0) || (lVar9 == 0)) goto LAB_1002def4e;
            if (2 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[%s] submit io-data sz = %d",lVar3 + 0xcf,param_2[2]);
            }
            QMutex::lock();
            FUN_1002df4d0(lVar4 + 0x18 + uVar7 * 0x28,&local_38);
            param_2[1] = 1;
            QMutex::unlock();
            uVar8 = 1;
            FUN_1002de560(param_1,lVar9);
            goto LAB_1002defc4;
          }
          uVar7 = uVar7 + 1;
          plVar6 = plVar6 + 5;
        } while (uVar7 < uVar5);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  lVar9 = 0;
LAB_1002def4e:
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s:%02x:%02x] can\'t submit io-data sz = %d  ep = %p  ep_info = %p",
                  (&PTR_s_UNK_101117020)[*(uint *)(*(long *)(lVar2 + 0x28) + 0x1490)],
                  *(undefined4 *)(lVar2 + 0x1c),uVar1,param_2[2],lVar3,lVar9);
  }
  param_2[3] = 0;
  param_2[1] = 3;
  uVar8 = 0;
  if (*(code **)(param_2 + 6) != (code *)0x0) {
    (**(code **)(param_2 + 6))(param_2);
  }
LAB_1002defc4:
  if ((uVar12 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar8;
}


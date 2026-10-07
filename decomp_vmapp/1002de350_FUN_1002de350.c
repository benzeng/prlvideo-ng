
undefined8 FUN_1002de350(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long local_38;
  
  uVar13 = param_1 + 0x20;
  local_38 = param_2;
  if ((uVar13 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar13 = uVar13 | 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_2 + 0x44c);
  lVar3 = *(long *)(lVar2 + 0x40 + (ulong)(uVar1 & 0xff) * 8);
  uVar12 = (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4);
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x18) + uVar11 * 0x10);
      if (((lVar4 != 0) &&
          (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 8 + uVar11 * 0x10), lVar5 != 0)) &&
         (uVar6 = (ulong)*(byte *)(lVar4 + 4), uVar6 != 0)) {
        plVar7 = (long *)(lVar5 + 8);
        uVar8 = 0;
        do {
          if (*(byte *)(*plVar7 + 2) == uVar1) {
            puVar10 = (undefined4 *)(lVar5 + uVar8 * 0x28);
            if ((lVar3 == 0) || (puVar10 == (undefined4 *)0x0)) goto LAB_1002de4aa;
            if (2 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[%s] submit io-pkt sz = %d",lVar3 + 0xcf,
                            *(undefined4 *)(param_2 + 0x43c));
            }
            QMutex::lock();
            FUN_1002e94c0(lVar5 + 0x10 + uVar8 * 0x28,&local_38);
            QMutex::unlock();
            *puVar10 = 1;
            uVar9 = 1;
            FUN_1002de560(param_1);
            goto LAB_1002de510;
          }
          uVar8 = uVar8 + 1;
          plVar7 = plVar7 + 5;
        } while (uVar8 < uVar6);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar12);
  }
  puVar10 = (undefined4 *)0x0;
LAB_1002de4aa:
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s:%02x:%02x] can\'t submit io-pkt sz = %d  ep = %p  ep_info = %p",
                  (&PTR_s_UNK_101117020)[*(uint *)(*(long *)(lVar2 + 0x28) + 0x1490)],
                  *(undefined4 *)(lVar2 + 0x1c),uVar1,*(undefined4 *)(param_2 + 0x43c),lVar3,puVar10
                 );
  }
  *(undefined4 *)(param_2 + 0x468) = 7;
  uVar9 = 0;
LAB_1002de510:
  if ((uVar13 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar9;
}


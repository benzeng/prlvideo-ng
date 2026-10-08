
undefined8 FUN_10018f120(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
  lVar2 = 0;
  if (lVar1 != 0) {
    do {
      while( true ) {
        lVar3 = lVar1;
        uVar5 = *(uint *)(lVar3 + 0x18);
        if ((param_2 <= uVar5) && ((uVar5 != param_2 || (param_3 <= *(uint *)(lVar3 + 0x1c)))))
        break;
        lVar1 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x10) == 0) {
          if (lVar2 == 0) goto LAB_10018f192;
          uVar5 = *(uint *)(lVar2 + 0x18);
          lVar3 = lVar2;
          goto LAB_10018f187;
        }
      }
      lVar1 = *(long *)(lVar3 + 8);
      lVar2 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
LAB_10018f187:
    if ((uVar5 <= param_2) && ((uVar5 < param_2 || (*(uint *)(lVar3 + 0x1c) <= param_3))))
    goto LAB_10018f194;
  }
LAB_10018f192:
  lVar3 = 0;
LAB_10018f194:
  puVar4 = &local_10;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x20);
  }
  return *puVar4;
}


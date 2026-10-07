
long FUN_1008a98b0(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_110;
  undefined4 *local_108;
  undefined4 local_100 [52];
  
  local_110 = 0;
  do {
    local_108 = local_100;
    local_100[0] = param_2;
    if ((DAT_1011c2978 == 0) || (iVar1 = FUN_100885160(DAT_1011c2978,local_100), iVar1 < 0)) {
      plVar3 = (long *)FUN_100822740(&local_108,&PTR_DAT_1011af880,0xb,8,FUN_1008aa000);
      if (plVar3 == (long *)0x0) {
        lVar4 = 0;
LAB_1008a9976:
        local_110 = lVar4;
        if (param_1 != (long *)0x0) {
          lVar4 = FUN_10087c990(param_2);
          if (lVar4 == 0) {
            *param_1 = 0;
          }
          else {
            *param_1 = lVar4;
            local_110 = FUN_10087c9b0(lVar4,param_2);
          }
        }
        return local_110;
      }
      lVar2 = *plVar3;
    }
    else {
      lVar2 = FUN_100885620(DAT_1011c2978,iVar1);
    }
    lVar4 = local_110;
    if ((lVar2 == 0) || (lVar4 = lVar2, (*(byte *)(lVar2 + 8) & 1) == 0)) goto LAB_1008a9976;
    param_2 = *(undefined4 *)(lVar2 + 4);
  } while( true );
}


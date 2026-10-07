
int FUN_10060e110(long *param_1)

{
  long ***ppplVar1;
  long ****pppplVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long ****pppplVar6;
  long *local_a0;
  long ***local_98;
  long ***local_90;
  long local_88;
  undefined1 local_80 [72];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_88 = 0;
  local_a0 = (long *)0x0;
  local_98 = (long ***)&local_98;
  local_90 = (long ***)&local_98;
  local_38 = lVar5;
  iVar3 = FUN_1006185f0(&DAT_1011cca80,&local_98);
  if (iVar3 < 0) {
    FUN_1008e3970("","crypt",0,"Error getting object list 0x%x",iVar3);
  }
  else {
    iVar3 = 0;
    pppplVar6 = (long ****)local_90;
    if ((long ****)local_90 != &local_98) {
      do {
        iVar3 = FUN_1006177f0(pppplVar6 + 2,&DAT_1011cca80,&local_a0);
        plVar4 = local_a0;
        if (iVar3 < 0) {
          FUN_1008e3970("","crypt",0,"Error at enum when creating object 0x%x",iVar3);
          lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_10060e25a;
        }
        iVar3 = (**(code **)(*local_a0 + 0x58))(local_a0,local_80);
        (**(code **)*plVar4)(plVar4);
        if (iVar3 < 0) {
          FUN_1008e3970("","crypt",0,"Failed to retrieve engine info.");
          lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_10060e25a;
        }
        plVar4 = operator_new(0x58);
        _memcpy(plVar4 + 2,local_80,0x44);
        plVar4[1] = (long)param_1;
        lVar5 = *param_1;
        *plVar4 = lVar5;
        *(long **)(lVar5 + 8) = plVar4;
        *param_1 = (long)plVar4;
        param_1[2] = param_1[2] + 1;
        pppplVar6 = (long ****)pppplVar6[1];
      } while (pppplVar6 != &local_98);
      lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
      iVar3 = 0;
    }
  }
LAB_10060e25a:
  if (local_88 != 0) {
    ppplVar1 = (long ***)*local_90;
    ppplVar1[1] = local_98[1];
    *local_98[1] = (long *)ppplVar1;
    local_88 = 0;
    pppplVar6 = (long ****)local_90;
    while (pppplVar6 != &local_98) {
      pppplVar2 = (long ****)pppplVar6[1];
      operator_delete(pppplVar6);
      pppplVar6 = pppplVar2;
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}


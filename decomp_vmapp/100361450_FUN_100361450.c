
void FUN_100361450(undefined8 param_1,uint param_2,ulong param_3,char param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  param_3 = param_3 & 0xffffffff;
  if ((param_4 == '\0') || (cVar1 = FUN_10038e330(param_3), cVar1 == '\0')) {
    fVar5 = (float)(param_2 >> 0x10 & 0xff) / DAT_100b44ca0;
    fVar6 = (float)(param_2 >> 8 & 0xff) / DAT_100b44ca0;
    fVar9 = (float)(param_2 & 0xff) / DAT_100b44ca0;
    fVar7 = (float)(param_2 >> 0x18) / DAT_100b44ca0;
    if (*(uint *)(&DAT_100b3ca14 + param_3 * 8) < 0x1000000) {
      cVar1 = *(char *)(DAT_1011c8478 + 0x2e);
    }
    else {
      cVar1 = *(char *)(DAT_1011c8478 + 0x2f);
    }
    fVar4 = fVar9;
    fVar8 = fVar7;
    fVar2 = fVar5;
    if (cVar1 == '\0') {
      cVar1 = FUN_10038e310(param_3);
      fVar3 = fVar7;
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_10038e320(param_3), fVar3 = fVar6, fVar2 = fVar7, cVar1 == '\0')) {
        fVar2 = fVar5;
      }
    }
    else {
      cVar1 = FUN_10038e270(param_3);
      fVar3 = DAT_100b39678;
      fVar4 = DAT_100b39678;
      fVar8 = DAT_100b39678;
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_10038e2b0(param_3), fVar3 = fVar6, fVar4 = DAT_100b39678,
         fVar8 = DAT_100b39678, cVar1 == '\0')) {
        fVar4 = fVar9;
        fVar8 = fVar7;
      }
    }
  }
  else {
    fVar2 = (float)FUN_10038e110((float)(param_2 >> 0x10 & 0xff) / DAT_100b44ca0);
    fVar3 = (float)FUN_10038e110((float)(param_2 >> 8 & 0xff) / DAT_100b44ca0);
    fVar4 = (float)FUN_10038e110((float)(param_2 & 0xff) / DAT_100b44ca0);
    fVar8 = (float)(param_2 >> 0x18) / DAT_100b44ca0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010036163d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5830)(fVar2,fVar3,fVar4,fVar8);
  return;
}


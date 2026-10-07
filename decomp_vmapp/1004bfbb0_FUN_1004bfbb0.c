
void FUN_1004bfbb0(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  double *pdVar3;
  
  if ((*param_1 != 0) && (cVar1 = (*DAT_1011ccc60)(), cVar1 == '\0')) {
    uVar2 = (*DAT_1011ccc98)(*param_1);
    pdVar3 = (double *)(*DAT_1011ccca8)(uVar2);
    while (pdVar3 != (double *)0x0) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"     >> [%d;%d] w=%d; h=%d",(int)*pdVar3,
                    (int)pdVar3[1],(int)pdVar3[2],(int)pdVar3[3]);
      pdVar3 = (double *)(*DAT_1011ccca8)(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x0001004bfc95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011ccca0)(uVar2);
    return;
  }
  FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"     Empty region");
  return;
}


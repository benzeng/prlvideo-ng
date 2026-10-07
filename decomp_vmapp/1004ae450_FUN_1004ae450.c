
void FUN_1004ae450(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  char cVar3;
  uint in_EAX;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  lVar2 = DAT_1011c35c8;
  if (DAT_1011c35c8 == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                    "Failed to set display cfg in Coherence: DynRes object doesn\'t exist");
      return;
    }
  }
  else {
    uStack_28._0_4_ = in_EAX;
    if (*(char *)(param_1 + 0x152) == '\0') {
      cVar3 = FUN_1000304a0(DAT_1011c35c8,1,FUN_1004b0830,param_1,0x3f);
      *(char *)(param_1 + 0x152) = cVar3;
      if (cVar3 == '\0') {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",0,
                      "Coherence Server cannot register in Dynamic Resolution tool. Use DR_USER_NONE."
                     );
      }
    }
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"Setting guest display configuration");
    }
    uVar1 = *(undefined1 *)(param_1 + 0x152);
    uStack_28 = (ulong)(uint)uStack_28;
    uVar4 = FUN_10052ac40(param_2,(long)&uStack_28 + 4);
    FUN_100030750(lVar2,uStack_28._4_4_,uVar4,uVar1);
  }
  return;
}



ostream * FUN_100041ea0(ostream *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  sentry local_48 [16];
  id local_38 [8];
  
  std::ostream::sentry::sentry(local_48,param_1);
  if (local_48[0] != (sentry)0x0) {
    lVar1 = *(long *)(*(long *)param_1 + -0x18);
    uVar2 = *(undefined8 *)(param_1 + lVar1 + 0x28);
    lVar6 = param_2;
    if ((*(uint *)(param_1 + lVar1 + 8) & 0xb0) == 0x20) {
      lVar6 = param_2 + param_3;
    }
    iVar4 = *(int *)(param_1 + lVar1 + 0x90);
    if (iVar4 == -1) {
      std::ios_base::getloc();
      plVar5 = (long *)std::locale::use_facet(local_38);
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      std::locale::~locale((locale *)local_38);
      iVar4 = (int)cVar3;
      *(int *)(param_1 + lVar1 + 0x90) = iVar4;
    }
    lVar6 = FUN_100042010(uVar2,param_2,lVar6,param_3 + param_2,param_1 + lVar1,(int)(char)iVar4);
    if (lVar6 == 0) {
      std::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::ostream::sentry::~sentry(local_48);
  return param_1;
}


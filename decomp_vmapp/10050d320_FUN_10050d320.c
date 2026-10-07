
undefined4 FUN_10050d320(undefined8 param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  long local_40;
  undefined8 local_38;
  
  uVar3 = FUN_10050d540(param_1,&local_38);
  uVar8 = uVar3;
  switch(uVar3) {
  case 0:
    local_40 = 0;
    iVar4 = _FSCopyAliasInfo(local_38,0,0,&local_40,0,0);
    lVar1 = local_40;
    if ((iVar4 == 0) && (local_40 != 0)) {
      lVar5 = _CFStringGetCStringPtr(local_40,0x8000100);
      if (lVar5 == 0) {
        uVar6 = _CFStringGetLength(lVar1);
        lVar5 = _CFStringGetMaximumSizeForEncoding(uVar6,0x8000100);
        pvVar7 = _malloc(lVar5 + 1U);
        uVar8 = 3;
        if (pvVar7 != (void *)0x0) {
          cVar2 = _CFStringGetCString(lVar1,pvVar7,lVar5 + 1U,0x8000100);
          if (cVar2 == '\0') {
            _free(pvVar7);
          }
          else {
            std::string::assign(param_2);
            _free(pvVar7);
            uVar8 = 0;
          }
        }
      }
      else {
        uVar8 = 0;
        std::string::assign(param_2);
      }
    }
    else {
      uVar8 = 3;
      if (2 < DAT_1011b55f8) {
        uVar8 = 3;
        FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",3,"FSCopyAliasInfo() err %i",iVar4);
      }
    }
    _DisposeHandle(local_38);
    break;
  default:
    uVar8 = 1;
    if (0 < DAT_1011b55f8) {
      uVar8 = 1;
      FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,"LinkAliasNode::getAliasHandle() err %i",
                    uVar3);
    }
    break;
  case 3:
  case 6:
  case 9:
    break;
  }
  return uVar8;
}


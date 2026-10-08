
int FUN_100a32000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  int local_34;
  
  lVar6 = param_1 + 0x188;
  local_34 = FUN_100a2cec0(lVar6,param_4);
  FUN_100a2ce90(lVar6,&local_34);
  if (local_34 == 0x44) {
    local_34 = 4;
    if ((*(uint *)(param_1 + 0x18c) & 0x40) != 0) {
      local_34 = 0x40;
    }
  }
  else if (local_34 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    lVar6 = _CFStringGetCStringPtr(param_4,0x8000100);
    if (lVar6 == 0) {
      uVar7 = _CFStringGetLength(param_4);
      lVar6 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
      pvVar8 = _malloc(lVar6 + 1U);
      if (pvVar8 != (void *)0x0) {
        cVar3 = _CFStringGetCString(param_4,pvVar8,lVar6 + 1U,0x8000100);
        if (cVar3 != '\0') {
          std::string::assign((char *)&local_58);
        }
        _free(pvVar8);
      }
    }
    else {
      std::string::assign((char *)&local_58);
    }
    lVar6 = local_48;
    if ((local_58 & 1) == 0) {
      lVar6 = (long)&local_58 + 1;
    }
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"Can\'t convert flavor type \'%s\'",lVar6);
    std::string::~string((string *)&local_58);
    return -0x622d;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"promiseKeeper: CPInterceptor contents is empty");
    return -0x622c;
  }
  if ((*(long *)(param_1 + 0x178) != *(long *)(param_1 + 0x170)) &&
     (lVar5 = _CFStringCompare(param_4,*(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8,0), lVar5 == 0))
  {
    iVar4 = FUN_100a32510(param_1,param_2,param_3);
    return iVar4;
  }
  lVar5 = param_1 + 0xa8;
  local_60 = lVar5;
  FUN_100ab03a0(lVar5);
  cVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))(*(long **)(param_1 + 0xa0),local_34);
  if (cVar3 == '\0') {
    iVar4 = -0x622c;
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"promiseKeeper: onClipboardRequested failed");
    goto LAB_100a3245f;
  }
  cVar3 = FUN_100ab46f0(param_1 + 0xe8,lVar5,60000);
  if (cVar3 == '\0') {
    iVar4 = -0x622c;
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"promiseKeeper: wait failed");
    goto LAB_100a3245f;
  }
  plVar2 = *(long **)(param_1 + 0x168);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  FUN_100ab03c0(&local_60);
  if ((((plVar2 == (long *)0x0) || (lVar5 = plVar2[2], lVar5 == 0)) ||
      (*(long *)(lVar5 + 0x10) == 0)) ||
     (lVar5 = *(long *)(lVar5 + 8), *(long *)(lVar5 + 0x18) == *(long *)(lVar5 + 0x20))) {
    iVar4 = -0x622c;
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"promiseKeeper: data empty");
LAB_100a323cd:
    if (plVar2 == (long *)0x0) goto LAB_100a3245f;
  }
  else {
    cVar3 = FUN_100a2eaf0(lVar6,param_4,local_34,lVar5 + 0x18,param_1 + 0x170);
    if (cVar3 == '\0') {
      iVar4 = -0x622c;
      FUN_100df99c0("CPTOOL","CPInterceptor",0,"promiseKeeper: conv to native failed");
    }
    else {
      lVar6 = _CFStringCompare(param_4,*(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8,0);
      if (lVar6 == 0) {
        iVar4 = FUN_100a32510(param_1,param_2,param_3);
      }
      else {
        lVar6 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,
                              *(long *)(param_1 + 0x170),
                              *(long *)(param_1 + 0x178) - *(long *)(param_1 + 0x170));
        if (lVar6 != 0) {
          if (*(long *)(param_1 + 0x178) != *(long *)(param_1 + 0x170)) {
            *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x170);
          }
          iVar4 = _PasteboardPutItemFlavor(param_2,param_3,param_4,lVar6,0);
          if ((iVar4 != 0) && (0 < DAT_10230ffd0)) {
            FUN_100df99c0("CPTOOL","CPInterceptor",1,
                          "PasteboardPutItemFlavor(item = %p) status = %d",param_3,iVar4);
          }
          _CFRelease(lVar6);
          goto LAB_100a323cd;
        }
        iVar4 = -0x6c;
        FUN_100df99c0("CPTOOL","CPInterceptor",0,"promiseKeeper: no memory");
      }
    }
  }
  LOCK();
  plVar1 = plVar2 + 1;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_100a3245f:
  FUN_100ab03c0(&local_60);
  return iVar4;
}


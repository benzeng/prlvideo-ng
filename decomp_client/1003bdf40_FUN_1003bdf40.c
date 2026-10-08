
void FUN_1003bdf40(long *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  BootDevice *pBVar1;
  BootDevice *pBVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *local_490;
  long local_488;
  BootDevice local_480 [184];
  BootDevice local_3c8 [184];
  BootDevice local_310 [184];
  BootDevice local_258 [184];
  BootDevice local_1a0 [184];
  BootDevice local_e8 [184];
  
  lVar9 = *param_2;
  uVar6 = (ulong)(lVar9 - *param_1) >> 3;
  iVar5 = (int)uVar6;
  do {
    if (iVar5 < 2) {
      return;
    }
    *param_2 = lVar9 + -8;
    puVar7 = (undefined8 *)*param_1;
    cVar3 = (*param_4)(*(undefined8 *)(lVar9 + -8),*puVar7);
    if (cVar3 != '\0') {
      pBVar1 = *(BootDevice **)*param_2;
      pBVar2 = *(BootDevice **)*param_1;
      BootDevice::BootDevice(local_310,pBVar1);
      BootDevice::operator=(pBVar1,pBVar2);
      BootDevice::operator=(pBVar2,local_310);
      BootDevice::~BootDevice(local_310);
    }
    iVar5 = (int)uVar6;
    if (iVar5 == 2) {
      return;
    }
    iVar4 = (int)(((uint)(uVar6 >> 0x1f) & 1) + iVar5) >> 1;
    cVar3 = (*param_4)(puVar7[iVar4],*(undefined8 *)*param_1);
    if (cVar3 != '\0') {
      pBVar1 = (BootDevice *)puVar7[iVar4];
      pBVar2 = *(BootDevice **)*param_1;
      BootDevice::BootDevice(local_258,pBVar1);
      BootDevice::operator=(pBVar1,pBVar2);
      BootDevice::operator=(pBVar2,local_258);
      BootDevice::~BootDevice(local_258);
    }
    cVar3 = (*param_4)(*(undefined8 *)*param_2,puVar7[iVar4]);
    if (cVar3 != '\0') {
      pBVar1 = *(BootDevice **)*param_2;
      pBVar2 = (BootDevice *)puVar7[iVar4];
      BootDevice::BootDevice(local_1a0,pBVar1);
      BootDevice::operator=(pBVar1,pBVar2);
      BootDevice::operator=(pBVar2,local_1a0);
      BootDevice::~BootDevice(local_1a0);
    }
    if (iVar5 == 3) {
      return;
    }
    pBVar1 = (BootDevice *)puVar7[iVar4];
    pBVar2 = *(BootDevice **)*param_2;
    BootDevice::BootDevice(local_e8,pBVar1);
    BootDevice::operator=(pBVar1,pBVar2);
    BootDevice::operator=(pBVar2,local_e8);
    puVar8 = (undefined8 *)(lVar9 + -0x10);
    BootDevice::~BootDevice(local_e8);
    for (; puVar7 < puVar8; puVar7 = puVar7 + 1) {
      while ((puVar7 < puVar8 &&
             (cVar3 = (*param_4)(*puVar7,*(undefined8 *)*param_2), cVar3 != '\0'))) {
        puVar7 = puVar7 + 1;
      }
      while( true ) {
        if (puVar8 <= puVar7) goto LAB_1003be210;
        cVar3 = (*param_4)(*(undefined8 *)*param_2,*puVar8);
        if (cVar3 == '\0') break;
        puVar8 = puVar8 + -1;
      }
      pBVar1 = (BootDevice *)*puVar7;
      pBVar2 = (BootDevice *)*puVar8;
      BootDevice::BootDevice(local_3c8,pBVar1);
      BootDevice::operator=(pBVar1,pBVar2);
      BootDevice::operator=(pBVar2,local_3c8);
      BootDevice::~BootDevice(local_3c8);
      puVar8 = puVar8 + -1;
    }
LAB_1003be210:
    cVar3 = (*param_4)(*puVar7,*(undefined8 *)*param_2);
    if (cVar3 != '\0') {
      puVar7 = puVar7 + 1;
    }
    pBVar1 = *(BootDevice **)*param_2;
    pBVar2 = (BootDevice *)*puVar7;
    BootDevice::BootDevice(local_480,pBVar1);
    BootDevice::operator=(pBVar1,pBVar2);
    BootDevice::operator=(pBVar2,local_480);
    BootDevice::~BootDevice(local_480);
    local_488 = *param_1;
    local_490 = puVar7;
    FUN_1003bdf40(&local_488,&local_490,param_3,param_4);
    *param_1 = (long)(puVar7 + 1);
    lVar9 = *param_2 + 8;
    *param_2 = lVar9;
    uVar6 = (ulong)(lVar9 - *param_1) >> 3;
    iVar5 = (int)uVar6;
  } while( true );
}


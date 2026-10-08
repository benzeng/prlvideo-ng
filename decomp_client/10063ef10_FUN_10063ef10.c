
void FUN_10063ef10(long *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *local_b80;
  long local_b78;
  CDownloadedKeyInfo local_b70 [240];
  CDownloadedKeyInfo local_a80 [240];
  CDownloadedKeyInfo local_990 [240];
  CDownloadedKeyInfo local_8a0 [240];
  CDownloadedKeyInfo local_7b0 [240];
  CDownloadedKeyInfo local_6c0 [240];
  CDownloadedKeyInfo local_5d0 [240];
  CDownloadedKeyInfo local_4e0 [240];
  CDownloadedKeyInfo local_3f0 [240];
  CDownloadedKeyInfo local_300 [240];
  CDownloadedKeyInfo local_210 [240];
  CDownloadedKeyInfo local_120 [240];
  
  lVar9 = *param_2;
  uVar6 = (ulong)(lVar9 - *param_1) >> 3;
  iVar4 = (int)uVar6;
  do {
    if (iVar4 < 2) {
      return;
    }
    *param_2 = lVar9 + -8;
    puVar7 = (undefined8 *)*param_1;
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_120,*(CDownloadedKeyInfo **)(lVar9 + -8));
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_210,*(CDownloadedKeyInfo **)*param_1);
    cVar3 = (*param_4)(local_120,local_210);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_210);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_120);
    if (cVar3 != '\0') {
      puVar1 = (undefined8 *)*param_1;
      uVar2 = *(undefined8 *)*param_2;
      *(undefined8 *)*param_2 = *puVar1;
      *puVar1 = uVar2;
    }
    iVar4 = (int)uVar6;
    if (iVar4 == 2) {
      return;
    }
    iVar5 = (int)(((uint)(uVar6 >> 0x1f) & 1) + iVar4) >> 1;
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_300,(CDownloadedKeyInfo *)puVar7[iVar5]);
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_3f0,*(CDownloadedKeyInfo **)*param_1);
    cVar3 = (*param_4)(local_300,local_3f0);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_3f0);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_300);
    if (cVar3 != '\0') {
      puVar1 = (undefined8 *)*param_1;
      uVar2 = puVar7[iVar5];
      puVar7[iVar5] = *puVar1;
      *puVar1 = uVar2;
    }
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_4e0,*(CDownloadedKeyInfo **)*param_2);
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_5d0,(CDownloadedKeyInfo *)puVar7[iVar5]);
    cVar3 = (*param_4)(local_4e0,local_5d0);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_5d0);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_4e0);
    if (cVar3 != '\0') {
      uVar2 = *(undefined8 *)*param_2;
      *(undefined8 *)*param_2 = puVar7[iVar5];
      puVar7[iVar5] = uVar2;
    }
    if (iVar4 == 3) {
      return;
    }
    puVar8 = (undefined8 *)(lVar9 + -0x10);
    puVar1 = (undefined8 *)*param_2;
    uVar2 = puVar7[iVar5];
    puVar7[iVar5] = *puVar1;
    *puVar1 = uVar2;
    for (; puVar7 < puVar8; puVar7 = puVar7 + 1) {
      for (; puVar7 < puVar8; puVar7 = puVar7 + 1) {
        CDownloadedKeyInfo::CDownloadedKeyInfo(local_6c0,(CDownloadedKeyInfo *)*puVar7);
        CDownloadedKeyInfo::CDownloadedKeyInfo(local_7b0,*(CDownloadedKeyInfo **)*param_2);
        cVar3 = (*param_4)(local_6c0,local_7b0);
        CDownloadedKeyInfo::~CDownloadedKeyInfo(local_7b0);
        CDownloadedKeyInfo::~CDownloadedKeyInfo(local_6c0);
        if (cVar3 == '\0') break;
      }
      while( true ) {
        if (puVar8 <= puVar7) goto LAB_10063f238;
        CDownloadedKeyInfo::CDownloadedKeyInfo(local_8a0,*(CDownloadedKeyInfo **)*param_2);
        CDownloadedKeyInfo::CDownloadedKeyInfo(local_990,(CDownloadedKeyInfo *)*puVar8);
        cVar3 = (*param_4)(local_8a0,local_990);
        CDownloadedKeyInfo::~CDownloadedKeyInfo(local_990);
        CDownloadedKeyInfo::~CDownloadedKeyInfo(local_8a0);
        if (cVar3 == '\0') break;
        puVar8 = puVar8 + -1;
      }
      uVar2 = *puVar7;
      *puVar7 = *puVar8;
      *puVar8 = uVar2;
      puVar8 = puVar8 + -1;
    }
LAB_10063f238:
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_a80,(CDownloadedKeyInfo *)*puVar7);
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_b70,*(CDownloadedKeyInfo **)*param_2);
    cVar3 = (*param_4)(local_a80,local_b70);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_b70);
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_a80);
    if (cVar3 != '\0') {
      puVar7 = puVar7 + 1;
    }
    uVar2 = *(undefined8 *)*param_2;
    *(undefined8 *)*param_2 = *puVar7;
    *puVar7 = uVar2;
    local_b78 = *param_1;
    local_b80 = puVar7;
    FUN_10063ef10(&local_b78,&local_b80,param_3,param_4);
    *param_1 = (long)(puVar7 + 1);
    lVar9 = *param_2 + 8;
    *param_2 = lVar9;
    uVar6 = (ulong)(lVar9 - *param_1) >> 3;
    iVar4 = (int)uVar6;
  } while( true );
}


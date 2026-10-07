
undefined8 * FUN_10078f9b0(undefined8 *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  QDataStream local_78 [24];
  undefined4 local_60;
  QIODevice local_58 [48];
  
  uVar1 = *(uint *)(param_2 + 0x4c);
  uVar5 = (ulong)uVar1;
  uVar9 = 0x52;
  if (uVar5 == 0) goto LAB_10078fa7e;
  iVar12 = 0x5a;
  if (1 < uVar1) {
    iVar12 = uVar1 * 8 + 0x52;
  }
  uVar11 = 1;
  if (1 < uVar1) {
    uVar11 = uVar5;
  }
  uVar13 = 0;
  iVar8 = 0;
  if (uVar1 == 0) {
LAB_10078fa56:
    piVar4 = (int *)(param_2 + 0x84 + (uVar11 + uVar13) * 8);
    lVar3 = uVar5 - uVar13;
    do {
      iVar8 = iVar8 + *piVar4;
      piVar4 = piVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else {
    uVar13 = 0;
    iVar8 = 0;
    iVar10 = 0;
    if (uVar1 != (uVar1 & 1)) {
      uVar13 = uVar5 - (uVar1 & 1);
      piVar4 = (int *)(param_2 + 0x8c + uVar11 * 8);
      lVar3 = uVar5 - (uVar5 & 1);
      iVar8 = 0;
      iVar10 = 0;
      do {
        iVar8 = iVar8 + piVar4[-2];
        iVar10 = iVar10 + *piVar4;
        piVar4 = piVar4 + 4;
        lVar3 = lVar3 + -2;
      } while (lVar3 != 0);
    }
    iVar8 = iVar8 + iVar10;
    if (uVar5 != uVar13) goto LAB_10078fa56;
  }
  uVar9 = iVar8 + iVar12;
LAB_10078fa7e:
  *param_3 = uVar9;
  FUN_10078ebd0(local_58);
  cVar2 = FUN_10078ecc0(local_58,*param_3);
  if (cVar2 == '\0') {
    *param_1 = 0;
  }
  else {
    FUN_10078ed60(local_58,3);
    QDataStream::QDataStream(local_78,local_58);
    local_60 = 7;
    FUN_100792580(param_2,local_78);
    uVar1 = *param_3;
    uVar5 = FUN_10078edc0(local_58);
    if (uVar1 == uVar5) {
      uVar6 = FUN_10078efa0(local_58);
      puVar7 = operator_new(0x18);
      *(undefined4 *)(puVar7 + 1) = 1;
      puVar7[2] = uVar6;
      *puVar7 = &PTR_FUN_100bef320;
      *param_1 = puVar7;
    }
    else {
      FUN_1008e3970("","IOCommunication",0,"Buffer size is wrong!");
      *param_1 = 0;
    }
    QDataStream::~QDataStream(local_78);
  }
  FUN_10078ec40(local_58);
  return param_1;
}



void FUN_1004a2cd0(undefined8 param_1,int param_2,int param_3,int param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  QImage local_98 [32];
  QImage local_78 [32];
  QImage local_58 [32];
  int local_38;
  int local_34;
  
  lVar5 = *(long *)PTR_PTR_10111c948;
  puVar3 = (undefined8 *)PTR_PTR_10111c948;
  lVar7 = 0;
  if (lVar5 != 0) {
    do {
      lVar7 = lVar5;
      if ((*(int *)((long)puVar3 + 0xc) == param_3 && *(int *)(puVar3 + 1) == param_2) ||
         (param_3 * param_2 < *(int *)((long)puVar3 + 0xc) * *(int *)(puVar3 + 1))) break;
      lVar5 = puVar3[3];
      puVar3 = puVar3 + 3;
      lVar7 = 0;
    } while (lVar5 != 0);
  }
  puVar6 = puVar3 + -3;
  if (lVar7 != 0) {
    puVar6 = puVar3;
  }
  piVar8 = (int *)*puVar6;
  iVar2 = *piVar8;
  while( true ) {
    if (iVar2 == 0) {
      return;
    }
    piVar8 = piVar8 + 1;
    cVar1 = FUN_1004a2140(param_1,iVar2,param_5);
    if ((cVar1 != '\0') && (*param_5 != param_5[1])) break;
    iVar2 = *piVar8;
  }
  if ((*(int *)(puVar6 + 1) == param_2) &&
     ((param_4 == 5 && (*(int *)((long)puVar6 + 0xc) == param_3)))) {
    return;
  }
  QImage::QImage(local_58);
  local_38 = param_2;
  local_34 = param_3;
  QImage::scaled(local_78,local_58,&local_38,0,1);
  QImage::operator=(local_58,local_78);
  QImage::~QImage(local_78);
  if (param_4 != 5) {
    QImage::convertToFormat(local_98,local_58,param_4,0);
    QImage::operator=(local_58,local_98);
    QImage::~QImage(local_98);
  }
  uVar4 = QImage::bits();
  lVar5 = QImage::bits();
  iVar2 = QImage::byteCount();
  FUN_1004a2ee0(param_5,uVar4,lVar5 + iVar2);
  QImage::~QImage(local_58);
  return;
}


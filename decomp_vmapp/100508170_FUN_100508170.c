
undefined1 FUN_100508170(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  QImage local_38 [32];
  
  uVar1 = *param_1;
  lVar2 = *param_2;
  QImage::fromData((uchar *)local_38,(int)*(undefined8 *)(lVar2 + 0x10) + (int)lVar2,
                   (char *)(ulong)*(uint *)(lVar2 + 4));
  uVar3 = FUN_100508640(uVar1,local_38);
  QImage::~QImage(local_38);
  return uVar3;
}


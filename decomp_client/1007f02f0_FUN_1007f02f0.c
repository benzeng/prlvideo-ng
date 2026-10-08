
void FUN_1007f02f0(long param_1,undefined4 param_2,uint param_3,int param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  QKeySequence *this;
  QKeySequence local_40 [8];
  QKeySequence local_38 [8];
  
  FUN_100df99c0("","prl_client_app",0,
                "nKeyCode = %0X,  nModifiers = %0X nDirection = %d bEnabled = %d",param_2,param_3,
                param_4,param_5);
  uVar2 = FUN_100cdf3f0();
  uVar2 = FUN_100cdf770(param_2,uVar2);
  uVar3 = FUN_100cdf5a0(uVar2);
  this = (QKeySequence *)(param_1 + 0x18);
  if (param_4 == 0) {
    this = (QKeySequence *)(param_1 + 0x10);
  }
  QKeySequence::QKeySequence(local_38,this);
  uVar3 = uVar3 | (param_3 & 0x100000) << 6 |
                  param_3 << 8 & 0x2000000 | param_3 << 8 & 0x8000000 | (param_3 & 0x40000) << 10;
  if (param_5 == '\0') {
    uVar3 = 0;
  }
  QKeySequence::QKeySequence(local_40,uVar3,0,0,0);
  QKeySequence::operator=(this,local_40);
  QKeySequence::~QKeySequence(local_40);
  cVar1 = QKeySequence::operator==(local_38,this);
  if (cVar1 == '\0') {
    FUN_100868490(param_1,param_4,this,local_38);
  }
  QKeySequence::~QKeySequence(local_38);
  return;
}


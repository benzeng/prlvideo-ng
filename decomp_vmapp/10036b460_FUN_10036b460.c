
void FUN_10036b460(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x600;
  FUN_10038e870(lVar1,param_1,0x400);
  lVar2 = param_1 + 0x628;
  FUN_10038e870(lVar2,param_1 + 0x400,0x200);
  FUN_10038e8e0(lVar1,"#define OFF_MTRL_DIFF\t%u\n",0);
  FUN_10038e8e0(lVar1,"#define OFF_MTRL_SPEC\t%u\n",1);
  FUN_10038e8e0(lVar1,"#define OFF_MTRL_AMB\t\t%u\n",2);
  FUN_10038e8e0(lVar1,"#define OFF_MTRL_EMS\t\t%u\n",3);
  FUN_10038e8e0(lVar1,"#define OFF_SCENE_AMB\t%u\n",4);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_MVIEW\t%u\n",5);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_IMVIEW\t%u\n",9);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_MVP\t%u\n",0xd);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_PROJ\t%u\n",0x11);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_TEX\t%u\n",0x15);
  FUN_10038e8e0(lVar1,"#define LIGHT_STRIDE\t%u\n",7);
  FUN_10038e8e0(lVar1,"#define OFF_POS\t%u\n",0x35);
  FUN_10038e8e0(lVar1,"#define OFF_DIR\t%u\n",0x36);
  FUN_10038e8e0(lVar1,"#define OFF_DIFF\t%u\n",0x37);
  FUN_10038e8e0(lVar1,"#define OFF_SPEC\t%u\n",0x38);
  FUN_10038e8e0(lVar1,"#define OFF_AMB\t%u\n",0x39);
  FUN_10038e8e0(lVar1,"#define OFF_ATT\t%u\n",0x3a);
  FUN_10038e8e0(lVar1,"#define OFF_SPOT\t%u\n",0x3b);
  FUN_10038e8e0(lVar1,"#define OFF_FOG_COLOR\t%u\n",0x6d);
  FUN_10038e8e0(lVar1,"#define OFF_FOG_PARAMS\t%u\n",0x6e);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_MVIEW0\t%u\n",5);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_MVIEW1\t%u\n",0x6f);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_MVIEW2\t%u\n",0x77);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_MVIEW3\t%u\n",0x7f);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_MVIEW4\t%u\n",0x87);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_IMVIEW0\t%u\n",9);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_IMVIEW1\t%u\n",0x73);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_IMVIEW2\t%u\n",0x7b);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_IMVIEW3\t%u\n",0x83);
  FUN_10038e8e0(lVar1,"#define OFF_MAT_IMVIEW4\t%u\n",0x8b);
  FUN_10038e8e0(lVar1,"\nuniform vec4 c[%u]; \n",0x8f);
  FUN_10038e8e0(lVar2,"#define COLOR_KEY_EPS\t(0.5 / 255.0) \n");
  FUN_10038e8e0(lVar2,"#define BUMP_STRIDE\t\t%u\n\n",2);
  FUN_10038e8e0(lVar2,"#define OFF_TFACTOR\t\t%u\n",9);
  FUN_10038e8e0(lVar2,"#define OFF_CLIP_PLANE\t%u\n",3);
  FUN_10038e8e0(lVar2,"#define OFF_FOG_COLOR\t%u\n",1);
  FUN_10038e8e0(lVar2,"#define OFF_FOG_PARAMS\t%u\n",2);
  FUN_10038e8e0(lVar2,"#define OFF_BUMP_MAT\t\t%u\n",10);
  FUN_10038e8e0(lVar2,"#define OFF_BUMP_INFO\t%u\n",0xb);
  FUN_10038e8e0(lVar2,"#define OFF_COLOR_KEY\t%u\n",0x1a);
  FUN_10038e8e0(lVar2,"#define OFF_ALPHAREF\t\t%u\n",0);
  FUN_10038e8e0(lVar2,"\nuniform vec4 c_ps[%u]; \n",0x22);
  return;
}


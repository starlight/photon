/* Generated from core/photon.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0 (rev e31bbee5)
   freebsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: core/photon.scm -output-file photon.c -uses input -uses parse
   uses: input eval parse library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_input_toplevel)
C_externimport void C_ccall C_input_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_parse_toplevel)
C_externimport void C_ccall C_parse_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[8];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,49,54,50,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_137)
static void C_ccall f_137(C_word c,C_word *av) C_noret;
C_noret_decl(f_140)
static void C_ccall f_140(C_word c,C_word *av) C_noret;
C_noret_decl(f_143)
static void C_ccall f_143(C_word c,C_word *av) C_noret;
C_noret_decl(f_146)
static void C_ccall f_146(C_word c,C_word *av) C_noret;
C_noret_decl(f_149)
static void C_ccall f_149(C_word c,C_word *av) C_noret;
C_noret_decl(f_152)
static void C_ccall f_152(C_word c,C_word *av) C_noret;
C_noret_decl(f_155)
static void C_ccall f_155(C_word c,C_word *av) C_noret;
C_noret_decl(f_161)
static void C_ccall f_161(C_word c,C_word *av) C_noret;
C_noret_decl(f_163)
static void C_ccall f_163(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* k135 */
static void C_ccall f_137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_137,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k138 in k135 */
static void C_ccall f_140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_140,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_input_toplevel(2,av2);}}

/* k141 in k138 in k135 */
static void C_ccall f_143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_143,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_parse_toplevel(2,av2);}}

/* k144 in k141 in k138 in k135 */
static void C_ccall f_146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_146,c,av);}
a=C_alloc(14);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_163,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/photon.scm:1: ##sys#with-environment"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k147 in k144 in k141 in k138 in k135 */
static void C_ccall f_149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_149,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/photon.scm:8: scheme#display"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
av2[2]=lf[4];
tp(3,av2);}}

/* k150 in k147 in k144 in k141 in k138 in k135 */
static void C_ccall f_152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_152,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/photon.scm:9: scheme#newline"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t2;
tp(2,av2);}}

/* k153 in k150 in k147 in k144 in k141 in k138 in k135 */
static void C_ccall f_155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_155,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2=av;
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t2;
tp(2,av2);}}

/* k159 in k153 in k150 in k147 in k144 in k141 in k138 in k135 */
static void C_ccall f_161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_161,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a162 in k144 in k141 in k138 in k135 */
static void C_ccall f_163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_163,c,av);}
C_trace(C_text("core/photon.scm:1: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(49))){
C_save(t1);
C_rereclaim2(49*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,8);
lf[0]=C_h_intern(&lf[0],7, C_text("photon#"));
lf[1]=C_h_intern(&lf[1],34, C_text("chicken.base#implicit-exit-handler"));
lf[2]=C_h_intern(&lf[2],14, C_text("scheme#newline"));
lf[3]=C_h_intern(&lf[3],14, C_text("scheme#display"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021photon v0.0.1-rc1"));
lf[5]=C_h_intern(&lf[5],30, C_text("##sys#register-compiled-module"));
lf[6]=C_h_intern(&lf[6],6, C_text("photon"));
lf[7]=C_h_intern(&lf[7],22, C_text("##sys#with-environment"));
C_register_lf2(lf,8,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_137,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[11] = {
{C_text("f_137:core_2fphoton_2escm"),(void*)f_137},
{C_text("f_140:core_2fphoton_2escm"),(void*)f_140},
{C_text("f_143:core_2fphoton_2escm"),(void*)f_143},
{C_text("f_146:core_2fphoton_2escm"),(void*)f_146},
{C_text("f_149:core_2fphoton_2escm"),(void*)f_149},
{C_text("f_152:core_2fphoton_2escm"),(void*)f_152},
{C_text("f_155:core_2fphoton_2escm"),(void*)f_155},
{C_text("f_161:core_2fphoton_2escm"),(void*)f_161},
{C_text("f_163:core_2fphoton_2escm"),(void*)f_163},
{C_text("toplevel:core_2fphoton_2escm"),(void*)C_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|replaced variables: 5 
o|removed binding forms: 9 
o|removed binding forms: 5 
o|simplifications: ((##core#call . 3)) 
o|  call simplifications:
o|    scheme#list	3
o|contracted procedure: k169 
o|contracted procedure: k173 
o|contracted procedure: k177 
o|removed binding forms: 3 
o|substituted constant variable: r170 
o|substituted constant variable: r174 
o|substituted constant variable: r178 
o|removed binding forms: 3 
*/
/* end of file */

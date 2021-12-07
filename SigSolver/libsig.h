#pragma once

int sigdim(int d, int depth);
int logsigdim(int d, int depth);
void additiveKron(float* a, float* b, float* c, int m, int n);
void signatureAdditiveKron(float* a, int i, float* b, int j, float* c, int d);
void signatureProduct(float* sig1, float* sig2, int d, int depth);
void multiplicativeKron(float* a, int m, float* b, int n, float* c, float alpha);
void oneStepSignature(float* sig, float* delta, int d, int depth);
void signature(float* path, int length, int d, int depth, float* sig);
void zeroLayer(float* tensor, int d, int depth);
void tensorLog(float* tensor, float* logTensor, int d, int depth);
void logSignature(float* path, int length, int d, int depth, float* sig);


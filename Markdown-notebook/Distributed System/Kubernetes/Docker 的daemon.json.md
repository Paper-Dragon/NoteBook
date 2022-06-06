# Deamon.json Simple

```json
{
  "graph": "/data/docker",  // 存储路径
  "storage-driver": "overlay2", // 存储驱动
  "storage-opts": [
    "overlay2.override_kernel_check=true" // overlay2 检查
  ],
  "insecure-registries": ["harbr.docker.com","registry.access.redhat.com","quay.io","http://f1361db2.m.daocloud.io"],
  "registry-mirrors": ["http://hub-mirror.c.163.com"],
  "bip": "172.7.5.1/24",  // bridge 的 ip
  "exec-opts": ["native.cgroupdriver=systemd"], //定义cgroup驱动
  "live-restore": true  // docker容器不依赖与docker引擎  ，引擎死容器不死
  "log-driver": "json-file",
  "log-opts": {
    "max-size": "100m"
  },
  "data-root": "/data/docker" // docker数据存储在哪里
  
}
systemctl daemon-reload
systemctl restart docker
systemctl enable docker

```